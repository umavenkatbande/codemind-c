#include<stdio.h>
void dyw (int a)
{
    int b,c,d;
    b=(a/365); 
    c=(a-(b*365)); 
    d=(c/7);
    printf("%d
%d",b,d);
    
}
int main()
{ 
    int a;
    scanf("%d",&a);
    dyw(a);
    
}