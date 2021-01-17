#include<stdio.h>

int main()
{
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   if(c>=a+b)
   {
       printf("can not construct");
   }
   else if(c*c>b*b+a*a)
   {
       printf("obtuse triangle");
   }
   else if(c*c==b*b+a*a)
   {
       printf("right triangle");
   }
   else
   {
       printf("acute triangle");
   }
   return 0;

}
