#include<stdio.h>
int main()
{
    int i,j,k,t=1,p,r;
    scanf("%d",&i);
    j=i-1;

    r=1;
    while(t <= i)
    {
        for(p=1;p<=j;p++)
        {
            printf(" ");
        }
       for(k=1;k<=r;k++)
        {
            if (k == 1){
               printf("*");
            }  else {
                printf(" *");
            }
        }
        r++;
        if(t<i)
        {
            printf("\n");
        }
            t++;
            j--;
    }
    return 0;
}
