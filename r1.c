#include <stdio.h>
#include <string.h>
void main()
{
 char str[20] = "India";
int i, len = strlen(str);
for(i = len - 1; i >= 0; i--)
 {
    printf("%c", str[i]);
 }    
}
