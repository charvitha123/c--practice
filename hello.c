#include <stdio.h>
 int main()
{
 char name [100];
 printf("\nenter your name :");
 scanf("%99s",name);
 printf("\nhello %s",name);
 int age;
 printf("\nenter your age:");
 scanf("%d",&age);
 printf("you are %d years old.",age);
 return 0;
}