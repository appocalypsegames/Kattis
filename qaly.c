#include <stdio.h>
main(){
    int c;
    float a,b;
    scanf("%i",&c);
    float sum=0;
    for(int i=0;i<c;i++){
        scanf("%f%f",&a,&b);
        sum+=a*b;
    }
    printf("%f",sum);
}