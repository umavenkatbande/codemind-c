#include<stdio.h>
int main()
{
    int a,b,c; 
    scanf("%d%d%d",&a,&b,&c);
    if(b>a && c>a)
    printf("%d",b+c);
    else if(a>c && b>c)
    printf("%d",a+b);
    else 
    printf("%d",a+c);
    
}