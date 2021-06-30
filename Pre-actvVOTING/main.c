#include<stdio.h>
#include<conio.h>
void main()
{
int age;
char name[50]; // or *name


 printf("\n Type the Name of the Voters: ");
 gets(name);

 printf("\n Enter The Age : ");
 scanf("%d",&age);

 if(age>=18)
  {
    printf("\n %s is Eligible to Vote",name);
  }
 else
  {
    printf("\n %s is Not Eligible to Vote",name);
  }

 getch();
}
