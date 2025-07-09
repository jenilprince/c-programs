#include <stdio.h>
int main(){
    //simple calculator
    int a,b,c;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number1: ");
    scanf("%d",&b);
    printf("Enter a number: ");
    scanf("%d",&c);
    switch (a) {
        case 1:
            printf("Sum: %d",b+c);
            break;
        case 2:
            printf("Diff %d",b-c);
            break;
        case 3:
            printf("Prod %d",b*c);
            break;
        case 4:
            printf("Quot %d",b/c);
            break;
        default:
            printf("Invalid");
        }

    }
