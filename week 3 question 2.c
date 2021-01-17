#include<stdio.h>
int main()
{
    int g,s,i,k=0;

    while(scanf("%d",&i)!=EOF)
    {
        if(k==0)
        {
            g=i;
            s=i;
            k++;
        }
        else if(i>g)
        {
            g=i;
        }
        else if(i<s)
        {
            s=i;

        }
    }
    printf("%d %d",g,s);




    return 0;
}
