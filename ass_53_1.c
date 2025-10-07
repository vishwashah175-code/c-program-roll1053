// compute the sum of element in a 1d array

#include<stdio.h>
int main()
{
  int arr[6]={10,20,30,40,50};
  int sum=0,i;
  for(i=0;i<5;i++)
  {
    sum= sum + arr[i];
  }
  printf("\n sum of element is : %d",sum);
  return 0;
}
