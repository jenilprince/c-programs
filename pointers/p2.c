#include <stdio.h>
int main()
{
    char name[6]="Jenil";
    char *point=name;
    while(*point!=0){
        printf("%c ",*point);
        point++;
    }
}