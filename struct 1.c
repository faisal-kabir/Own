#include<stdio.h>
struct pointer
{
    int x,y;
    struct pointer *p;
};
typedef struct pointer pt;
int main()
{
    pt *mp;
    //mp.x=10;
    // mp.y=20;
    mp=(pt*)malloc(sizeof(pt));
    mp->x=10;
    mp->y=20;
    mp->p=(pt*)malloc(sizeof(pt));

    mp->p->x=30;
    mp->p->y=40;
    mp->p->p=(pt*)malloc(sizeof(pt));

    mp->p->p->x=50;
    mp->p->p->y=60;
    mp->p->p->p=(pt*)malloc(sizeof(pt));
    printf("%d",mp->x);
    return 0;
}



