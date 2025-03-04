#include<stdio.h>
int main(){
    int a;
    printf("Enter marks: ");
    scanf("%d", &a);

    if(a >= 80){
        printf("A+");
    }
    else if(a >= 70){
        printf("A");
    }
    else
        printf("Fail");
    return 0;
}