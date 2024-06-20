#include <stdio.h>

#define SIZE 10 // Size is always even

int main()
{
    int i,j,N;
    int board[SIZE][SIZE];
    int left,top;

    left=0;
    top =SIZE-1;
    N   =1;

    for(i=1;i<=SIZE/2;i++,left++,top--)
    {
        for(j=left;j<=top;j++,N++)// Fill from left to right
        {
            board[left][j]=N;
        }
        for(j=left+1;j<=top;j++,N++)// Fill from top to down
        {
            board[j][top]=N;
        }
        for(j=top-1;j>=left;j--,N++) // Fill from right to left
        {
            board[top][j] = N;
        }
        for(j=top-1;j>=left+1;j--,N++)// Fill from down to top
        {
            board[j][left]=N;
        }
    }
    for(i=0;i<SIZE;i++)// Print the pattern
    {
        for(j=0;j<SIZE;j++)
        {
            printf("%-5d",board[i][j]);
        }
        printf("\n");
    }
}
