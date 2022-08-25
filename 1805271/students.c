#include<stdio.h>
int main()
{
   int arr[]={1,2,3,4,5,6,7,8,9,1,2,4,5,2},temp;
  int count =1;
    for(int i=0;i<14;i++)
     {
        printf("%d",arr[i]);
     } 
    for(;;)
    {
       for(int i=0; i<count;)
       {
         temp=arr[14-i];
         arr[14-i]=arr[i];
         arr[i]=temp;
       }
        count++;
       if((7-i)<count)
       break;
     }
     
     printf("\n");
     for(int i=0;i<14;i++)
     printf("%d", arr[i]); 
 }     
    
