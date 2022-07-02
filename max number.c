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
    int maxi=a[0];

    for(i=0;i<n;i++)
    {
        if(a[i]>maxi)
        {
            maxi=a[i];
        }
    }
    printf("Maximum=%d\n",maxi);
int pos;
    for(i=0;i<n;i++)
    {
        if(a[i]==maxi)
        {
            pos=i+1;
        }
    }
    printf("Position=%d",pos);
    return 0;
}
