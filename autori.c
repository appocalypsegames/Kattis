#include <string.h>
main(){
    char s[100];
    scanf("%s",s);
    char *t=strtok(s,"-");
    while(t!=NULL) {
        printf("%c",t[0]);
        t=strtok(NULL,"-");
    }
}
