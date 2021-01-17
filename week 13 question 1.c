char *mystrcat(char *dest, char *src)
{
    int d, s;

    for(d=0; dest[d] != '\0'; d++);

    for(s=0; src[s] != '\0'; s++);


    for(int i = 0; i < s; i++)
    {
        dest[i+d] = src[i];
    }

    dest[d+s] = '\0';

    return dest;

}

char *mystrncat(char *dest, char *src, int n)
{
    int d, s;

    for(d=0; dest[d] != '\0'; d++);
    for(s=0; src[s] != '\0'; s++);


    for(int i = 0; i < n; i++)
    {
        dest[i+d] = src[i];
    }
    dest[d+n] = '\0';

    return dest;
}
