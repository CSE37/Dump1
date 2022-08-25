#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<string.h>
#include<unistd.h>
#include<arpa/inet.h>
int main()
{
	int mysockfd,newsockfd;
	char buf[100];
	struct sockaddr_in serverAddr;
	struct sockaddr_storage serverStorage;
	socklen_t addr_size;
	mysockfd = socket(PF_INET, SOCK_STREAM,0);
	serverAddr.sin_family=AF_INET;
	serverAddr.sin_port=htons(7891);
	serverAddr.sin_addr.s_addr= inet_addr("127.0.0.1");
	memset(serverAddr.sin_zero,'\0',sizeof(serverAddr.sin_zero));
	bind(mysockfd,(struct sockaddr *)&serverAddr, sizeof(serverAddr));
	if(listen(mysockfd,5)==0)
		printf("Listening\n");
	else
		printf("Error\n");
	char username[] = "OmPandey";
	char password[] = "kiit@1234";
	addr_size=sizeof(serverStorage);
	newsockfd=accept(mysockfd,(struct sockaddr *)&serverStorage, &addr_size);
	char str[100];
	char str1[100];
	char i[] = "no";
	for(;;)
	{
	     read(newsockfd,str,sizeof(str));
	     if(strcmp(str,username) == 0)
	     { 	
	     	read(newsockfd,str1,sizeof(str1));
	     	printf("Decrypting");
	     	for(int i = 0; (i < 100 && password[i] != '\0');i++)
        	str1[i] = str1[i]+3;
	     	if(strcmp(str1,password) == 0)
	     	{
	     	 char i[] = "yes";
	     	 send(newsockfd,i,sizeof(i),0);
	     	 break;
	     	}
	     }
	     send(newsockfd,i,sizeof(i),0);
	}
	printf("Done");
	return 0;
}
