#include <stdio.h>
int main(void)
{
    char n[1000];
    gets(n);
    char *b=n;
    char*e=n+strlen(n)-1;
    char*o=b;
    while(b<=e){
        if(*b==' '||*b=='\t')*b='\0';
        ++b;
    }
    while(e>=o){
        while(*e=='\0')--e;
        while(*e!='\0')--e;
        printf("%s ",e+1);
        --e;
    }

    return 0;
}
