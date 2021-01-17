#include<stdio.h>

void bubble_sort(int n[10],int u)
    {
        for(int i=0; i<u; i++)
        {
            for(int j=0; j<u; j++)
            {
                if(n[j]>n[i])
                {
                    int temp=n[j];
                    n[j]=n[i];
                    n[i]=temp;
                }
            }
        }

        for(int i = 0;i < u;i ++)
            printf("%d ", n[i]);
    }

int main(void)
{
    int n[10];
    scanf("%d %d %d %d %d %d %d %d %d %d",&n[0],&n[1],&n[2],&n[3],&n[4],&n[5],&n[6],&n[7],&n[8],&n[9]);
    bubble_sort(n, 10);
    return 0;
}
