#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<string.h>
#include<unistd.h>
#include<arpa/inet.h>
int main()
{
	int c_sockfd;
	char buf[100];
	struct sockaddr_in serverAddr;
	socklen_t addr_size;
	c_sockfd = socket(PF_INET, SOCK_STREAM,0);
	serverAddr.sin_family=AF_INET;
	serverAddr.sin_port=htons(7891);
	serverAddr.sin_addr.s_addr= inet_addr("127.0.0.1");
	memset(serverAddr.sin_zero,'\0',sizeof(serverAddr.sin_zero));
	addr_size=sizeof(serverAddr);
	connect(c_sockfd,(struct sockaddr *)&serverAddr, addr_size);
	printf("Enter username and password:");
	char user[100];
	char password[100];
	char out[5];
	for(;;)
	{
	scanf("%s",user);
	send(c_sockfd,user,sizeof(user),0);
	scanf("%s",password);
	printf("Encrypting \n");
        for(int i = 0; (i < 100 && password[i] != '\0');i++)
        password[i] = password[i]-3;
	send(c_sockfd,password,sizeof(password),0);
	read(c_sockfd,out,sizeof(out));
	if(strcmp("yes",out) ==0)
	break;
	else
	printf("Re-enter");
	}
	return 0;
}
