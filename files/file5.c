#include <stdio.h>
int main(){
    for (int i=1;i<=10;i++){
        printf("%d\n",i);
    }
    int a=6,sum=1;
    while (a!=0){
        sum*=a%10;
        a=a/10;
    }
    printf("%d\n",sum);
    int b=5,fact=1;
    while (b>0){
        fact=b*fact;
        b-=1;
    }
    printf("%d\n",fact);




}