#include<stdio.h>
#define max 10000
int main()
{
    int a[max];
    int i,n,sum=0;


    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d\n",sum);
    printf("%.1lf",(float)sum/n);

    return 0;
}
