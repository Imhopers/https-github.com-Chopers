#include<stdio.h>
#include<stdlib.h>
int main()
{
        char name[50];
        int marks,i,num;
        printf("Enter number of students: ");
        scanf("%d",&num);
        FILE *fptr;
        fptr=(fopen("C:\\Users\\admin\\Desktop\\CODES\\File handling\\StudentsFiles.txt","w"));
        if(fptr==NULL) {
                printf("\nError!");
                exit(1);
        }
        for (i=0;i<num;++i) {
                printf("\nFor student%d\nEnter name: ",i+1);
                scanf("%s",name);
                printf("Enter marks: ");
                scanf("%d",&marks);
                fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
        }
        fclose(fptr);
        return 0;
}
