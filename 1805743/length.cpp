#include<iostream>
using namespace std;
class length
{
public:
int feet,inches;
int input()
{cout<<"enter the feet and inches";
cin>>feet>>inches;
}
int greater(length l)
{
if(
feet>l.feet||inches>l.inches)
return *this;
else
return l;
}
};
int main()
{
length l1,l2,l3;
l1.input();
l2.input();
l3=l1.greater(length l2);
return 0;
}

