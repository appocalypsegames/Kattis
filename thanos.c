#include <stdio.h>
main(){
    long int t,p,r,f,i,y;
    scanf("%li",&t);
    for(i=0;i<t;i++){
        scanf("%li%li%li",&p,&r,&f);
        y=0;
        if(p<=f){
            while(1){
                y++;
                p*=r;
                if(p>f)
                    break;
            }
        }
        printf("%li\n",y);
    }
}