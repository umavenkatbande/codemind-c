#include<stdio.h>
int aw(int a,int b,int c)
{
    int d;
    d=3.0*a-(b+c);
    return(d);
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int x; 
    x=aw(a,b,c);
    printf("%d",x);
    
}