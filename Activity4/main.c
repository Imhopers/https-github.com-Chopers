#include <stdio.h>
int main() {
char full_name[50];

printf(" Input the name and age greater than 18: ");
gets(full_name);
printf("\nI am %s ",full_name);
printf("\n------------------------------------------------------------------------");

printf("\n Input name and age less than 18: ");
gets(full_name);
printf("\nI am %s \n",full_name);
printf("\n------------------------------------------------------------------------");

printf("\n\n Input the name and age as text: ");
gets(full_name);
printf("\nI am %s \n",full_name);
printf("\n------------------------------------------------------------------------");

printf("\n\n Input your name full name with spaces and your age: ");
gets(full_name);
printf("\n I am %s \n",full_name);
printf("\n------------------------------------------------------------------------");





return 0;
}
