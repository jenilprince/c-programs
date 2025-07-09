#include <stdio.h>
int main(){
    //check spy: sumdig=proddig eg: 1124
    int a=1124,sum=0,prod=1,n=a;
    while (n!=0){
        sum+=(n%10);
        prod*=(n%10);
        n/=10;
    }
    printf("Sum: %d\n",sum);
    printf("Product: %d\n",prod);
    if (sum==prod){
        printf("Spy");
    }
    else{
        printf("Not Spy");
    }

}