#include <stdio.h>
#include <math.h>
int main(){
    float x;
    scanf("%f",&x);
    printf("%i",(int)round((x*1000)*(5280.0/4854.0)));
    return 0;
}