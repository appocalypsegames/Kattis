#include <stdio.h>
#include <string.h>
int main() {
    char i[4];
    int n;
    scanf("%s%i",i,&n);
    if((strcmp(i,"OCT")==0&&n==31)||(strcmp(i,"DEC")==0&&n==25)){
        printf("yup");
    } else {
        printf("nope");
    }
    return 0;
}
