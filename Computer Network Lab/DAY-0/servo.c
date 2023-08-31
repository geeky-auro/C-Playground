#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#define MYPORT 5790

int main(int argc, char const *argv[])
{
    char msg[100];
    int sockfd;
    struct sockaddr_in my_addr, cl_addr;
    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    my_addr.sin_family = AF_INET;
    my_addr.sin_port = htons(MYPORT);
    my_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    memset(&(my_addr.sin_zero), '\0', 8);
    int k = bind(sockfd, (struct sockaddr *)&my_addr, sizeof(my_addr));
    if (k < 0)
        printf("Binding Failed");
    else
        printf("Binding Successfull");
    socklen_t s = sizeof(cl_addr);
    int m = recvfrom(sockfd, msg, 100, 0, (struct sockaddr *)&cl_addr, &s);
    printf("Message received : %s", msg);
    close(sockfd);
    return 0;
}