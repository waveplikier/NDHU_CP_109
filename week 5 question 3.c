#include<stdio.h>
int main()
{
    int i=1,f,k=0,r;


    while(i!=0)
    {
        scanf("%d",&i);
        if(i==0)
        {
           break;
        }
        else if(i==1)
        {
            printf("not a prime\n");
        }
        else if(i==2)
        {
            printf("prime\n");
        }
        else
        {
            for(f=2;f<i;f++)
            {
                if(i%f==0)
                {   k++;
                    break;
                }
                else
                {
                    r++;
                }
            }
            if(k==1)
            {
                printf("not a prime\n");
            }
            else
            {
                printf("prime\n");
            }

        }

k=0;
    }

    return 0;
}
