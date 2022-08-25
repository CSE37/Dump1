#include<stdio.h>
struct emp
{
int no;
char name[10];
float sal,pf,hra;
};
void display(struct emp);
int main()
{
struct emp e[10];
int i;
for(i=0;i<10;i++)
{
printf("Enter the name of the employee:\n");
scanf("%s",e[i].name);
printf("Enter the number:\n");
scanf("%d",&e[i].no);
display(e[i]);
return 0;
}
}
void display(struct emp b)
{
printf("\nName:%s",b.name);
printf("\nNumber: %d",b.no);
}
