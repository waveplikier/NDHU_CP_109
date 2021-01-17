#include<stdio.h>
int sum();
int i, n1, n2, n3, gcd;
void main()
{
    printf("Find GDC divisor of three number\n");
    int ans = GDC();
    printf("GDC divisor of three number: %d\n",ans);
}
void GDC()
{
    printf("Enter three number: ");
    scanf("%d %d %d",&n1, &n2, &n3);
    for(i=1; i <= n1 && i <= n2 && i <= n2; ++i){
        if(n1%i==0 && n2%i==0 && n3%i==0)
            gcd = i;
    return i;
    }
}
