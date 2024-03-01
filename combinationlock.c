#include <stdio.h>
int main(){
    int a,b,c,d,t;
    scanf("%i%i%i%i",&a,&b,&c,&d);
    while(a!=0||b!=0||c!=0||d!=0){
        t=120;
        t+=(40+a-b)%40;
        t+=(40-b+c)%40;
        t+=(40+c-d)%40;
        printf("%i\n",t*9);
        scanf("%i%i%i%i",&a,&b,&c,&d);
    }
    return 0;
}