#include <stdio.h>
#include <stdlib.h>

int is_prime(int);
int main(int argc, char *argv[])

{

    int inputnumber=0,countn=0,answer=0;

    scanf("%d",&inputnumber);
    int prime[inputnumber];

    for (int x=2;x<=inputnumber; x++)
{
    if(is_prime(x))
{
    prime[countn]=x;
    countn++;
}

}
    for(int v=0;v<countn;v++)
{
    for(int b=0;b<countn;b++)
{
    if((prime[v]+prime[b])==inputnumber)
    answer++;
}

}
    printf("%d",(answer+1)/2);
    return 0;
}
    int is_prime(int num)
{
    int i;
    if(num==1)
{
    return 0;
}
    else
{
    for(i=2; i<num; i++)
{
    if(num%i==0)
{
    return 0;
}
}
}
    return 1;
}
