#include<stdio.h>
int main()
{
    int a,b;
    int *ptra,*ptrb;
    int temp;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("The values before swapping:a=%d,b=%d",a,b);
    ptra=&a;    
    ptrb=&b;    
    temp=*ptra;   
    *ptra=*ptrb;  
    *ptrb=temp;  
    printf("\nThe values after swapping:a=%d,b=%d",a,b);
    return 0;
}