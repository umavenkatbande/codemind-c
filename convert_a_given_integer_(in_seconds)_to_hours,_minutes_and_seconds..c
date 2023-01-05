#include<stdio.h>
void hms(int a)
{ 
    int b,c,d,e;
    b=a/3600;
    c=a-(b*3600);
    d=c/60;
    e=c%60;
    printf("H:M:S-%d:%d:%d",b,d,e);
    
}
int main()
{
    int a; 
    scanf("%d",&a);
    hms(a);
    
}