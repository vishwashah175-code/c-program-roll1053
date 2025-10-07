// find the smallest element in 1d array

#include<stdio.h>
int main()
{
  int arr[6]={2,9,5,3,8,6};
  int min,i;
    min=arr[0];   // assuming 1st is smallest
  for(i=1;i<5;i++)
  {
    if(arr[i]<min)
    {
      min=arr[i];
    }
  }
  printf("\n smallest element in array : %d",min);
  return 0;
}
