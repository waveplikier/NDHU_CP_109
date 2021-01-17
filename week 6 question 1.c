#include<stdio.h>
int main()
{
    int MAX,MIN,i,k=0;

    while(scanf("%d",&i)!=EOF)
    {
        if(k==0)
        {
            MAX=i;
            MIN=i;
            k++;
        }
        else if(i>MAX)
        {
            MAX=i;
        }
        else if(i<MIN)
        {
            MIN=i;
        }
    }
    printf("%d %d",MAX,MIN);

    return 0;
}
