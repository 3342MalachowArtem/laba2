#include <stdio.h>
#include "output.h"

void output(int result) {
    if (result == 0) {
        printf("Данные некорректны\n");
    } 
    else {
        printf("%d\n", result);
    }
}