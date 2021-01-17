char *trim(char *dest)
{
    int d;
    int ss, se;

    for(d=0; dest[d] != '\0'; d++);

    se = d-1;

    static char new_dest[100];

    for(int i = 0; i < d; i++)
    {
        if(dest[i] == ' ' || dest[i] == '\t' || dest[i] == '\n')
        {
            ss++;
        }
        else
        {
            break;
        }

    }
    for(int i = se; i > 0; i--)
    {
        if(dest[i] == ' ' || dest[i] == '\t' || dest[i] == '\n')
        {
            se--;
        }
        else
        {
            break;
        }
    }
int j=0;


for(int i = ss; i < se+1; i++,j++)
{
    new_dest[j] = dest[i];
}
    new_dest[j] = '\0';
return new_dest;
}
