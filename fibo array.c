#include<stdio.h>
#define max 10000
int main()
{
    int a[max];
    int i,n;

    scanf("%d",&n);

    a[0]=0;
    a[1]=1;

    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("%d",a[3]);
        return 0;
}
