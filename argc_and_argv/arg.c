#include <stdio.h>
int main (int argc,char *argv[]){
    printf("Count: %d\nValues: ",argc-1);
    for (int i=1;i<argc;i++){
        printf("%c\t",*argv[i]);
    }
    return 0;
}