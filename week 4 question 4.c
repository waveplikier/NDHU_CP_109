#include<stdio.h>
int main()
{
  int a=0,b=0,k=0;
  char ap,bp,E;
    while(k<=4)
    {
        scanf("%c%c%c",&ap,&bp,&E);

        if(ap=='P'&&bp=='S')
        {b++;}
        else if(ap=='P'&&bp=='R')
        {a++;}
         else if(ap=='S'&&bp=='P')
        {a++;}
         else if(ap=='S'&&bp=='R')
        {b++;}
         else if(ap=='R'&&bp=='P')
        {b++;}
         else if(ap=='R'&&bp=='S')
        {a++;}
        else
        {a+=0;
        b+=0;}

        k++;
    }


    if(a>b)
    {
    printf("Alice");
    }
    else if(a<b)
    {
    printf("Bob");
    }
    else
    {printf("Draw");}
    return 0;

}
