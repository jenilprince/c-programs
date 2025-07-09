#include <stdio.h>
int main(){
    //check harshad: num divisible by sum of dig
    int a=1001,last,sum=0;
    int n=a;
    while (n>0){
        last=n%10;
        sum+=last;
        n/=10;
    }
    printf("%d\n",sum);
    if (a%sum==0){
        printf("Harshad");
    }
    else{
        printf("Not Harshad");
    }
}