#include <stdio.h>
main(v,i,c){
    char l[1000];
    fgets(l,sizeof(l),stdin);
    v=0;
    for (i=0;l[i]!='\0';i++) {
        c=l[i];
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            v++;
        }
    }
    printf("%d",v);
}
