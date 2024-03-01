#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char *input = NULL;
    size_t bufsize = 0;
    ssize_t input_length;
    while (1) {
        input_length = getline(&input, &bufsize, stdin);

        if (strcmp(input, "END\n") == 0)
            break;
        
        input[input_length - 1] = '\0'; 

        if (strlen(input) > 9)
            printf("4\n");
        else if (strlen(input) > 1)
            printf("3\n");
        else if (strcmp(input, "1") == 0)
            printf("1\n");
        else
            printf("2\n");
    }

    free(input);
    return 0;
}
