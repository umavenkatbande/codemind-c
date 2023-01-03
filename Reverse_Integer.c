#include<stdio.h>
int main()
{ 
    int i,n,s=0,q,r;
    scanf("%d",&n);
    while(n!=0)
    
    {
        r=n%10;
        s=s*10+r;
        n=n/10; 
        
    } 
    printf("%d",s);
    
}