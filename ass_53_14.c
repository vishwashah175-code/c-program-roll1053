#include<stdio.h>
         int main()
         {
              int a,b,c;
              printf("enter the value of a  :");
              scanf("%d",&a);

              printf("enter the value of b  :");
              scanf("%d",&b);
              printf("enter the value of c  :");
              scanf("%d",&c);
              if(a<b)
              {
                    printf("\n a is smallest : %d",a);
              }
              else if(b<c)
              {
                   printf("\n b is smallest : %d",b);
              }
               if(c<a)
               {
                   printf("\n c is smallest : %d",c);
               }
                return 0;
           }

