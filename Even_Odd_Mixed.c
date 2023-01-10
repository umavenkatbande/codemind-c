#include<stdio.h>
int main()
{
    int n,r,temp,c=0,ec=0,oc=0; scanf("%d",&n); temp=n; while(n>0) { r=n%10; if(r%2==0) { ec++; } else { oc++; } n=n/10; while(temp>0) { temp=temp/10; c++; } } if(c==ec) { printf("Even"); } else if(c==oc) { printf("Odd"); } else { printf("Mixed"); } }