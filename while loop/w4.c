#include <stdio.h>
#include <math.h>
int main(){
    int a=370,power=0,sum=0,n=a,last;
    while (n!=0){
        last=n%10;
        power+=1;
        n/=10;
    }
    printf("Power: %d\n",power);
    int b=a;
    while (b!=0){
        last=b%10;
        sum=sum+ (int)round(pow(last,power));
        b/=10;
    }
    printf("Sum dig: %d\n",sum);
    if (sum==a){
        printf("Armstrong");
    }
    else{
        printf("Not");
    }
    
}