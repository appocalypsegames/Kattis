#include <string.h>
main() {
    int n,i,p,b,c;
    char m[31];
    scanf("%d", &n);
    getchar();
    for(i=0;i<n;i++){
        scanf("%s %d/%*d/%*d %d/%*d/%*d %d",m,&p,&b,&c);
        if(p>=2010||b>=1991){
            printf("%s eligible\n",m);
        }else if(c>40){
            printf("%s ineligible\n",m);
        }else{
            printf("%s coach petitions\n",m);
        }
    }
}
