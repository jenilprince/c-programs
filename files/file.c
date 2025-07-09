#include <stdio.h>
//Even or odd checker
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a%2==0 && a!=0) {
        printf("Even");
    }
    if (a==0) {
        printf("Zero");
    }
    if (a%2==1) {
        printf("Odd");
    }

}