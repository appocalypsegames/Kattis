#include <stdio.h>
main(t,n,a,s,i){
    scanf("%i",&t);
    for(i=0;i<t;i++){
        for(scanf("%i",&n),a=n,s=0;n!=0;a=n){
            scanf("%i",&n); 
            if(a*2<n)s+=n-a*2;
        }
        printf("%i\n",s);
    }
}