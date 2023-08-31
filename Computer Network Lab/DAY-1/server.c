#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<string.h>
 
int main(){
 
int sockfD,m;
struct sockaddr_in server_addr,client_addr;
sockfD=socket(AF_INET,SOCK_DGRAM,0);
server_addr.sin_family=AF_INET;
// Use Port Numbers above 500 becoz below that every port number is reserved
server_addr.sin_port=ntohs(6011);
server_addr.sin_addr.s_addr=inet_addr("127.0.0.1");
 
bind(sockfD,(struct sockaddr *)&server_addr,sizeof(struct sockaddr));
 
char buf[100];
int len=sizeof(struct sockaddr);
m=recvfrom(sockfD,buf,100,0,(struct sockaddr *)&client_addr,&len);
printf("Receive from Client: %s \n",buf);
 
return 0;
}
