#include<stdio.h>
int main ()
{
struct emp{
int id;
char name[100];
int dept;
float salary;
};
struct emp e[5],*ptr;
ptr=&e;
for(int i=0;i<5;i++)
{
printf("\n Enter id: name : Dept : Salary :");
scanf("%d %s %d %f",& (ptr+i)->id,& (ptr+i)->name,& (ptr+i)->dept,& (ptr+i)->salary);
}
for(int i=0;i<5;i++)
{
printf("\nID is:%d \n \nNAME is:%s\n \nDEPT no. is:%d\n \nSALARY is: %f\n",(ptr+i)->id,(ptr+i)->name,(ptr+i)->dept,(ptr+i)->salary);
}
return 0;
}
