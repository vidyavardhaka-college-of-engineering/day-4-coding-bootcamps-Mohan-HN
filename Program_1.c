//Write a C program to get the integer array from the user and print it in the given order.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements in the given order with space separated.
//Example:
//Input:
//5 
//1 5 10 50 123
//Output: 
//1 5 10 50 123
#include<stdio.h> 

int main()
{
   int arr[10], n;
   printf("Enter the number of elements : ");
   scanf("%d",&n);
   printf("Enter the arry elements : ");
   for(int i=0;i<n;i++)
   {
     scanf("%d",&arr[i]);
   }
   printf("The entered elements are: ");
   for(int i=0;i<n;i++)
   {
     printf("%d ",arr[i]);
   }
   return 0; 
}
//Declare all the variables[N, array a, i] used in the code
   //Read the Value of N using scanf statement
   //Read the array elements using for loop and scanf statment
   //Print the array elements in using printf statement