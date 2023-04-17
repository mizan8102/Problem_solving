#include<stdio.h>
#include<string.h>
int main() {
   char str1[] = "hello World!";
   char str2[] = "Hello World!";
   int result = strcmp(str1, str2);
   if (result==0)
   printf("Strings are equal");
   else
   printf("Strings are unequal");
   printf("\nValue returned by strcmp() is: %d" , result);
   return 0;
}