#include <stdio.h>
int main()
{
    int a[100],number,i,j,temp;
    printf("Enter Number of Elements:");
    scanf("%d",&number);
    printf("Enter the Array Elements:");
    for(i=0;i<number;i++)
        scanf("%d",&a[i]);
    for(i=0;i<number;i++){
        for(j=i+1;j<number;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Selection Sort:");
    for(i=0;i<number;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}