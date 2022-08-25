int main()
{
int socfd;
socfd=socket(AF_INET,SOCK_DGRAM,0);
if(socfd!=-1)
printf("\nSocket Id : %d",socfd);
close(socfd);
return 0; 
}
