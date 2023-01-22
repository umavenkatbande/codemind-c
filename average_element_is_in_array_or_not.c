#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    } 
    int sum=0;
    for(i=0;i<n;i++)
    {
       sum=sum+a[i];     
        }
    float avg;
    avg=sum/n;
    int res=0;
     for(i=0;i<n;i++)
     {
         if(a[i]==avg)
         {
             res=1;break;
         }
     }
     if(res==1)
     printf("True");
     else
     printf("False");
    
    
}