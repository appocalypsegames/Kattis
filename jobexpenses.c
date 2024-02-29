#include <math.h>
main(n,i,r,a){
    scanf("%i",&n);
    r=0;
    for(i=0;i<n;i++){
       scanf("%i",&a);
       if(a<0)
           r+=a;
    }
    printf("%i",abs(r));
}