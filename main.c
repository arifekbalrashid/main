#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks : ");
    scanf("%d",&marks);
    if(marks < 30){
        printf("D\n");
    }
    else if(marks >=30 && marks < 60){
        printf("C\n");
    }
    else if(marks >=60 && marks < 80){
        printf("B\n");
    }
    else{
        printf("A\n");
    }
    return 0;
}
