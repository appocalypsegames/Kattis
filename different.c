#include <stdio.h>
#include <stdlib.h>
int main(){
    long long int p1,p2;
    while(scanf("%lli %lli",&p1,&p2)>0){
        printf("%lli\n",llabs(p1-p2));
    }
    return 0;
}