#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fptr;
    char name[20];
    int age;
    float password;
    fptr=fopen("emp.txt","w");
    if (fptr==NULL)
    {
        printf("File does not exist.\n");
        return;
    }
    printf("Enter the name:");
    scanf("%s",name);
    fprintf(fptr,"Name=%s\n",name);
    printf("Enter the age:");
    scanf("%d",&age);
    fprintf(fptr,"Age=%d\n",age);
    printf("Enter the password:");
    scanf("%f",&password);
    fprintf(fptr,"Password=%.2f\n",password);
    fclose(fptr);
}