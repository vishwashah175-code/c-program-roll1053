#include<stdio.h>
     #include<string.h>
      int main()
      {
           char str1[10]="Hello";
           char str2[20]="vishwa";

           strcat(str1,str2);  //str1=hello vishwa

           printf("\n Concatenated String :%s",str1);
           return 0;
      }

