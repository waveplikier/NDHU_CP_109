#include <stdio.h>
int main() {
int h,c,s,go,timessnailsad=0;

    scanf("%d %d %d",&h,&c,&s);
    for (go=0;go!=h;timessnailsad++)
{   if(c>=h)
        {
            printf("1");return 0;
        }

    if(c-s<=0){printf("-1");return 0;}
    go=go+c;
    if (go>=h)

    {
        timessnailsad++;
        break;
    }
    else{go=go-s;}
}
    printf("%d",timessnailsad);
    return 0;
}
