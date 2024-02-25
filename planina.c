#include <stdio.h>
#include <math.h>
int main(){
    long long int n, res;
    scanf("%lli",&n);
    res=(pow(2,n)+1)*(pow(2,n)+1);
    printf("%lli",res);
    return 0;
}