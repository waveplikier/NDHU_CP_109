#include<stdio.h>
int main()
{
   int a,b,c,d;

   scanf("%d%d%d%d",&a,&b,&c,&d);
   if((c <= a && c <= b && d <= a && d <= b) ||
      (c >= a && c >= b && d >= a && d >= b))
   {
       printf("no overlay");
   }
    else
    {
        printf("overlay");
    }
    return 0;
}
