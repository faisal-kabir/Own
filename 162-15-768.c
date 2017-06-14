#include<stdio.h>
int s[100],i=-1,j,c=0;
int main()
{
    int n,a,b;
    scanf("%d",&n);
    while(n--)
    {
        c=0;
        i=-1;
        scanf("%d",&a);
        while(a--)
        {
            scanf("%d",&b);
            insert(b);
        }
        print();
    }
    return 0;
}
void insert (int d)
{
    i++;
    s[i]=d;
}
void print()
{
    c=0;
     printf("Ordering: ");
    for(j=i; j>=0; j--)
    {
        printf("%d ",s[j]);
        if (c<s[j])
            c=s[j];
    }
    printf("\nMax %d\n",c);
}
