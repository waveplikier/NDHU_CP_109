#include<stdio.h>
#include<math.h>
void primeFactors(int n) {
   int i, i2=1, i3=1;
   while(n % 2 == 0) {
        if(i2==1){
        i2=0;
        printf("%d", 2);
        n = n/2;
        }
        else{
        printf(" * %d", 2);
        n = n/2;
        }
   }
   for(i = 3; i <= sqrt(n); i=i+2){
        while(n % i == 0){
            if(i2==1){
            printf("%d", i);
            n = n/i;
            i2=0;
            }
            else{
            printf(" * %d", i);
            n = n/i;
            }
      }
   }
   if(n > 2) {
        if(i2==1){
            printf("%d", n);
            }
        else{
            printf(" * %d", n);
            }
   }
}
main() {
    int n, usrIn=1;
    scanf("%d", &n);
    usrIn = n;
    while(1){
        if(n == 0){
            return 0;
        }
        printf("%d = ", n);
        primeFactors(n);
        printf("\n");
        scanf("%d", &n);
    }
}
