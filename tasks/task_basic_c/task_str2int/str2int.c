#include <assert.h>
#include "str2int.h"
#include "stdio.h"


int str2int(const char *str) {
    int sign = 1;
    if (*str == 45){
        sign = -1;
        str++;
    }
    if (*str == 43){
        str++;
    }
    int result = 0;
    int count = 0;
    while (*str != '\0'){
        result = result * 10 + (*str - *"0");
        count += 1;
        str++;
        assert(sign == -1 && result == -2147483648 || sign == -1 && result >= 0 && count <= 9 || sign == 1 && result >= 0);

    }
    assert(count > 0);
    return sign * result;
}
