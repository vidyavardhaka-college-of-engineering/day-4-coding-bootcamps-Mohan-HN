//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.


#include<stdio.h>

int main()
{
    int arr[10], n, i,lar,sma;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
//Write your code here
    for(i=0;i<n;i++)
    {
      if(arr[i]>lar)
        lar=arr[i];
      if(arr[i]<sma)
        sma=arr[i];
    }
  printf("Largest=%d and Smallest=%d",lar,sma);
    return 0;
}
