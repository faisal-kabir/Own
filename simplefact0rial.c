#include <stdio.h>

int main()
{
    int i,x,n=1;

    scanf("%d",&x);
    for(i=x;i>=1;i--)
    {
        n=n*i;

    }
    printf("%d\n",n);

    return 0;

}
