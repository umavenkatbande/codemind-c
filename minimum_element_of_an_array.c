#include<stdio.h>
int main()
{
    int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{ scanf("%d",&a[i]);
} for(i=0;i<n;i++) 
{ 
    if(a[0]>a[i]) a[0]=a[i]; 
    
}
printf("%d",a[0]);
}