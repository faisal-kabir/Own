#include<stdio.h>
struct pointer
{
    int x,y;
    struct pointer *p;
};
typedef struct pointer pt;
int main()
{
    int i;
    pt *mp;

    mp=(pt*)malloc(sizeof(pt));
    pt *start = mp;

    for(i=0;i<3;i++)
    {
        scanf("%d %d",&mp->x,&mp->y);
         mp->p=(pt*)malloc(sizeof(pt));
        mp=mp->p;
    }
    mp=NULL;
    mp=start;
    while (mp->p!=NULL)
    {
        printf("%d %d\n",mp->x,mp->y);
        mp=mp->p;
    }
    return 0;
}
