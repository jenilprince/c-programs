#include <stdio.h>
int main(){
    //factorial calc
    int fact=1,start=0,a=6;
    while (start<a){
        start+=1;
        fact*=start;
    }
    printf("%d",fact);
}