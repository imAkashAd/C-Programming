#include<stdio.h>
int main(){
    int a;
    printf("Enter prize: ");
    scanf("%d", &a);
    if(a<=40 && a!=0){
        printf("Give me product.");
    }
    else if(a==0){
        printf("You're kidding right?");
    }
    else{
        printf("I don't need");
    }
    return 0;
}