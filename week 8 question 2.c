#include <stdio.h>

int main()
{
	int size;
	scanf("%d", &size);

	int arr[size+5][size+5];

	for(int a = 0; a < size; a++)
	{
		for(int b = 0; b < size; b++)
			{
				scanf("%d", &arr[a][b]);
			}
	}

	arr[0][0] = 2;

    int pos = 1;
    while(pos)
	{
		pos = 0;
        for(int r = 0; r < size; r++)
        {
            for(int c = 0; c < size; c++)
            {
                if (arr[r][c] == 2)
                {
                    if (r != 0 && arr[r-1][c]==0)
                    {
                        arr[r-1][c]=2;
                        pos = 1;
                    }
                    if (c != 0 && arr[r][c-1]==0)
                    {
                        arr[r][c-1]=2;
                        pos = 1;
                    }
                    if (r != size-1 && arr[r+1][c]==0)
                    {
                        arr[r+1][c]=2;
                        pos = 1;
                    }
                    if (c != size-1 && arr[r][c+1]==0)
                    {
                        arr[r][c+1]=2;
                        pos = 1;
                    }
                }
            }

        }
    }

    if (arr[size-1][size-1]==2)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
