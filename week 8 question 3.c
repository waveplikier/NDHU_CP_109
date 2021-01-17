#include<stdio.h>
int main()
{
	int x, y, val;
	int arr[100][100]={0};
    int sarr[100][100]={0};

    scanf("%d %d\n", &y, &x);

    for(int yy = 1; yy <= y; yy++)
    {
		for(int xx = 1; xx <= x; xx++)
		{
        	scanf("%d", &arr[yy][xx]);
			sarr[yy][xx]=1;
		}
    }
    int xa, xd, ys, yw;
    xa = 0;
	xd = x+1;
    ys = y+1;
	yw = 0;

	int move, m1, m2, m3, m4;
    for(move = 1; move < y; move++)
    {
        for(m1 = xa+1; m1 < xd && sarr[move][m1] == 1; m1++)
        {
			printf("%d ", arr[move][m1]);
			sarr[move][m1] = 0;
		}
        for(m2 = yw+2; m2 < ys && sarr[m2][m1-1] == 1; m2++)
        {
			printf("%d ", arr[m2][m1-1]);
			sarr[m2][m1-1] = 0;
		}
        for(m3 = xd-2; m3 > xa && sarr[m2-1][m3] == 1; m3--)
        {
			printf("%d ", arr[m2-1][m3]);
			sarr[m2-1][m3] = 0;
		}
        for(m4 = ys-2; m4 > yw+1 && sarr[m4][m3+1] == 1; m4--)
        {
			printf("%d ", arr[m4][m3+1]);
			sarr[m4][m3+1] = 0;
		}

        xa++;
		xd--;
		yw++;
		ys--;
    }
    return 0;
}
