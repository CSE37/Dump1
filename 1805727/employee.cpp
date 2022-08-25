#include<iostream>
using namespace std;
struct emp
{
int no;
char name[10];
void getdata()
{
cout<<"Enter the name of the employee:\n";
for(i=0;i<10;i++)
{
cin>>name[i];
}
cout<<"Enter the number:\n";
cin>>no;
}
void display()
{
cout<<"\nName:"<<name;
cout<<"\nNumber:"<<no;
}
};
int main()
{
struct emp e;
e.getdata();
e.display();
}
