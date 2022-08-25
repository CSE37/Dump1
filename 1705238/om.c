#include<stdio.h>
#include<string.h>
int main()
{
char password[100];
scanf("%s",password);
password[strlen(password)] = '0';
printf("%s",password);
}
