#include <stdio.h>
int main(){
    //Palindrome checker
    int a=1221,n=a,last,rev=0;
    printf("%d\n",a);
    while(n>0){
        last=n%10;
        rev=rev*10+last;
        n/=10;
        
    }
    printf("%d\n",rev);
    if (rev==a){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}