#include<stdio.h>
#define max 10000
int main()
{
    int a[max];
    int i,n;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int mini=a[0];

    for(i=0;i<n;i++)
    {
        if(a[i]<mini)
        {
            mini=a[i];
        }
    }
    printf("Minimum=%d\n",mini);
int pos;
    for(i=0;i<n;i++)
    {
        if(a[i]==mini)
        {
            pos=i+1;
        }
    }
    printf("Position=%d",pos);
    return 0;
}

