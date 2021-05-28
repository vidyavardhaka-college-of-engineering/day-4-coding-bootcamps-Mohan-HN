//Write a C program to get two rows and columns of integers from the user and print them in matrix fashion.

//Example:
//Input: 
//1 2 3 4
//Output: 
//1   2
//3   4
#include<stdio.h> 
int main()
{
  int arr[10][10];
  int row,col,i,j;
  printf("Enter the dimension of the matrix: ");
  scanf("%d %d",&row,&col);
  printf("Enter the array elements :");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
  printf("Entered matrix is :\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      printf("%d\t",arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
//Declare all the variables[row, col, array a(2D array), i] used in the code
   //Read the Value of row and coloumn of the matrix (i.e size of matrix) using scanf statement
   //Read the elements of matrix a using nested for loop and scanf statment
   //Print the elements of matrix a using nested for loop and printf statment as per the above specified format
