#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node nd;
nd *start,*rear;
int count=0;
int main()
{
    int n,b;
    scanf("%d",&n);
    while(n--)
    {
        start=NULL;
        count=0;
        while(1)
        {
            scanf("%d",&b);
            if (b==0)break;
            insert(b);
        }
        print();
    }
    return 0;
}
void insert (int d)
{
    nd *nn=(nd*)malloc(sizeof(nd));
    nn->data=d;
    nn->next=NULL;
    if (start==NULL)
        start=rear=nn;
        else
        {
            rear->next=nn;
            rear=nn;
        }
    count+=d;
}
void print()
{
    nd *list=start;
     printf("Ordering: ");
     while (list!=NULL)
    {
        printf("%d ",list->data*2);
        list=list->next;
    }
    printf("\nSum %d\n",count);
}
