#include <stdio.h>
int main(){
    //leap year checker
    int a;
    printf("Enter year: ");
    scanf("%d",&a);
    if (a%4==0 && a%100!=0){
        printf("Leap Year");
    }
    else{
        printf("Not Leap Year");
    }
}