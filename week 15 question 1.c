#include <stdio.h>
int main(void)
{
    int rows,cols;
    scanf("%d %d",&rows,&cols);
    int snail[rows][cols];
    for (int i=0;i<rows;++i){
        for(int j=0;j<cols;++j){
            scanf("%d",&snail[i][j]);
        }
    }
    shell(rows,cols,snail,0);
    return 0;
}



void shell(const int rows,const int cols,const int matrix[rows][cols],int circle)
{
        static int flag=0;
        int square=flag;
        for(int i=circle;i<cols-1-circle;++i){
            printf("%d ",matrix[circle][i]);
            ++flag;
            if(flag>=rows*cols)goto done;
        }
        for(int i=circle;i<rows-1-circle;++i){
            printf("%d ",matrix[i][cols-1-circle]);
            ++flag;
            if(flag>=rows*cols)goto done;
        }
        for(int i=cols-1-circle;i>circle;--i){
            printf("%d ",matrix[rows-1-circle][i]);
            ++flag;
            if(flag>=rows*cols)goto done;
        }
        for(int i=rows-1-circle;i>circle;--i){
            printf("%d ",matrix[i][circle]);
            ++flag;
            if(flag>=rows*cols)goto done;
        }
        if(square==flag)printf("%d ",matrix[circle][circle]);
        else { ++circle;shell(rows,cols,matrix,circle);}
        done: return;
}
