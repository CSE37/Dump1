#include<stdio.h>
using namespace std;
class add
{
int x;
int y;
public:
void getdata(int a,int b)
{
x=a;
y=b;
}
friend int sum(add);
};
int sum(add ADD)
{
int s;
int add::*px=&add::x;
int add::*py=&add::y;
add *pADD=&ADD;
s=ADD.*px+pADD->*py;
return s;
}
int main()
{
add a;
void (add::*pf)(int,int)=&add::getdata;
(a.*pf)(10,20);
cout<<"sum="<<sum(a)<<"\n";
add*op=&a;
(op->*pf)(30,40);
cout<<"sum="<<sum<<"\n";
return 0;
}
+11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111
