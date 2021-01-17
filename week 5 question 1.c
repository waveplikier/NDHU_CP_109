#include <stdio.h>

int main()
{
    int sum = 0, n, count = 0;

    scanf("%d",&n);

    while(n!=0){
        if(count%2==0){
            sum += n;
        }
        else{
            sum += n;
        }
        scanf("%d",&n);
        count++;
    }

    printf("%d",sum);
    return 0;
}
