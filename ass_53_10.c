// find the largest element in 1d array

#include<stdio.h>
int main()
{
  int arr[6]={2,9,5,3,8,6};
  int lar,i;
    lar=arr[0];   // assuming 1st is largest
  for(i=1;i<5;i++)
  {
    if(arr[i]>lar)
    {
      lar=arr[i];
    }
  }
  printf("\n largest element in array : %d",lar);
  return 0;
}
