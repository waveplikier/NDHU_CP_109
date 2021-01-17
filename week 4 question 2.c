#include<stdio.h>
int main()
{
    int a ,b;

    scanf("%d%d",&a,&b);

    if(a%b==0)
    {
        printf("%d is a multiple of %d.",a,b);
    }
    else
        {
         printf("%d is not a multiple of %d.",a,b);
        }
    return 0;
}
