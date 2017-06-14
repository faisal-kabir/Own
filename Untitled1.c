#include<stdio.h>
char stack[500];
char stack1[500];
int main()
{
    int n,i=0,j=0,k,l;
    char ch[10];
    scanf("%d\n",&n);
    while (n--)
    {
        i=0;
        j=0;
        while (gets(ch)!=EOF)
        {
            if (!ch[0])
                break;
            if (ch[0]>='0' && ch[0]<='9')
                stack[i++]=ch[0];
            else if (ch[0]==')')
            {
                for(k=j-1; k>=0; k--)
                {
                    if(stack1[k]=='+'||stack1[k]=='-'||stack1[k]=='*'||stack1[k]=='/')
                    {
                        stack[i++]=stack1[k];
                        j--;
                    }
                    else if(stack1[k]=='(')
                    {
                        j--;
                        break;
                    }
                }
            }
            else
            {
                stack1[j++]=ch[0];
            }
        }
        if(stack1[j-1]!=NULL)
        {
            for(l=j-1; l>=0; l--)
            {
                stack[i++]=stack1[l];
                j--;
            }
            for(l=0; l<=i-1; l++)
            {
                printf("%c",stack[l]);
            }
            printf("\n");
        }
        else
        {
            for(l=0; l<=i-1; l++)
            {
                printf("%c",stack[l]);
            }
             printf("\n");
        }
    }
    return 0;
}
int check (char a)
{
    if (a=='+' || a=='-')
        return 1;
    else if (a=='/' || a=='*')
        return 2;
    return -1;
}
