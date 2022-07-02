#include<stdio.h>
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    int number;

    while(number!=0)
    {
    scanf("%d",&number);

   int   result=fact(number);
    printf("%d",result);
    }
    return 0;
}
