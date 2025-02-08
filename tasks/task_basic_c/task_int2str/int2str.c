#include <assert.h>
#include "int2str.h"
#include "stdio.h"
#include <stdlib.h>
#include <stdbool.h>

char* int2str(int number) {
    printf("%d", number);
    bool isNegative = false;
    if (number < 0) {
        isNegative = true;
        number = -number;
    }
    char *str = malloc(13); //sign + int + /0
    str[12] = '\0';
    int i = 12;
    str[i] = 0 + '0';
    while(number > 0){
        str[i] = (number % 10) + '0';
        number /= 10;
        i--;
    }
    if (isNegative) {
        str[i] = '-';
        i--;
    }
    printf("%s\n", str + i);
    return (str + i + 1);
}