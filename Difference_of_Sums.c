#include<stdio.h>
int main()
{ 
    int n,i,sum=0,sums=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) 
    {
        sum=sum+i*i;
    } 
    for(i=1;i<=n;i++)
    {
        sums=sums+i;
        } int d=(sums*sums)-sum;
        printf("%d",d);
    
}