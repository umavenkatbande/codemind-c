#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* max69(int n) {
    char* str_n = (char*) malloc(sizeof(char) * 10);
    sprintf(str_n, "%d", n);
    int i;
    for (i= 0; i < strlen(str_n); i++) {
        if (str_n[i] == '6') {
            str_n[i] = '9';
            return str_n;
        }
    }
    return str_n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%s", max69(n));
    return 0;
}
