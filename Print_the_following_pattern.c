#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n-i+1;j<=n;j++)
        {
            c++;
            printf("%d ",j);
        }
        printf("
");
    }
}