#include <stdio.h>
int main(){
    //largest of two num
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    if (a>b){
        printf("%d is greater than %d\n",a,b);
    }
    else if (a==b){
        printf("Same numbers\n");
    }
    else{
        printf("%d is greater than %d\n",b,a);
    }
}