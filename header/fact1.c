#include "fact.h"
int fact(int a){
    int prod=1,n=a;
    for (int i=1;i<=n;i++){
        prod*=i;
    }
    return prod;
}