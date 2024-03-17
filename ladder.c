#include <stdio.h>
#include <math.h>
main(w,a){
    scanf("%d%d",&w,&a);
    printf("%d\n",(int)ceil(w/sin(a*M_PI/180.0)));
}
