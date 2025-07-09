#include <stdio.h>
int main(){
    //Check +ve, -ve zero
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a>0){
        printf("Positive");
    }
    else if (a<0){
        printf("Negative");
    }
    else{
        printf("Zero");
    }
}