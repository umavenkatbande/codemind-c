#include<stdio.h>
int main()
{
    int a,n,r,sum=0;
    scanf("%d",&n);
    a=n;
    while(a!=0) 
    {
        r=a%10;
        sum=(sum*10)+r;
        a=a/10; 
        
    }
    if(n==sum)
    {
        printf("True");
    }
    else
    { 
        printf("False");
    }
    
}