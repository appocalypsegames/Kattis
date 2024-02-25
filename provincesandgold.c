#include <stdio.h>
int main(){
    int g,p,c,s;
    scanf("%i%i%i",&g,&p,&c);
    s=g*3+p*2+c;
    if(s>7)
        printf("Province or ");
    else if(s>4)
        printf("Duchy or ");
    else if(s>1)
        printf("Estate or ");
    
    if(s>5)
        printf("Gold");
    else if(s>2)
        printf("Silver");
    else
        printf("Copper");
    return 0;
}