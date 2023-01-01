#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float s,area;
    s=(a+b+c)*0.5;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",area);
}