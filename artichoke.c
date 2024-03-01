#include <math.h>
main(p,a,b,c,d,n,i,j){
    scanf("%i%i%i%i%i%i",&p,&a,&b,&c,&d,&n);
    double results[n];
    for(i=0;i<n;i++)results[i]=p*(sin(a*(i+1)+b)+cos(c*(i+1)+d)+2);
    double max=0;
    double minSoFar=results[n-1];
    for(i=n-2;i>=0;i--){
        double decrease=results[i]-minSoFar;
        if(decrease>max)max=decrease;
        if(results[i]<minSoFar)minSoFar = results[i];
    }
    printf("%lf\n", max);
}