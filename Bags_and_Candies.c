#include<stdio.h>
int main()
{
    int n,k,m,cpb; 
    scanf("%d%d%d",&n,&k,&m);
    cpb=k*m;
    if(n%cpb==0) 
    printf("%d",n/cpb);
    else printf("%d",n/cpb+1);
    
}