#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
     int c;
    char e[100];
    scanf("%i",&c);
    for(int i=0;i<c;i++){
        scanf("%s",e);
        if (strcmp(e,"P=NP")==0){
            printf("skipped\n");
        }else{
            int sum = 0;
            char *token=strtok(e,"+");
            while (token!=NULL) {
                sum+=atoi(token);
                token=strtok(NULL,"+");
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}