#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<netdb.h>
#define MYPORT 5790

int main(int argc, char const *argv[])
{
    char msg[100];
    int sockfd;
    struct sockaddr_in svr_addr;
    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    svr_addr.sin_family = AF_INET;
    svr_addr.sin_port = ntohs(MYPORT);
    svr_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    int s = sizeof(svr_addr);
    printf("Enter a message : ");
    fgets(msg, 256, stdin);
    int m = sendto(sockfd, msg, 100, 0, (const struct sockaddr *)&svr_addr, s);
    close(sockfd);
    return 0;
}