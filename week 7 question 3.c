#include <stdio.h>

int main() {
    char in[1000],inn[1000];
    int n=0,nn=0;

    scanf("%s",in);
    for(n=0;in[n]!=NULL;n++){
        inn[n]=tolower(in[n]);}

    n--;

    for(nn=0;nn<=n;nn++){
    if (inn[nn]!=inn[n-nn]){printf("%s is not a palindrome.",in);return 0;}}

    printf("%s is a palindrome.",in);

    return 0;}
