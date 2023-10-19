#include <stdio.h>
#include "input.h"
#include "input_menu.h"

char space = ' ';

void input(int *size, int *a, int *arr){
    scanf("%d", &a);
    while (size < N && space == ' ') {
        scanf("%d%c", &arr[*size], &space);
        size++;
    }
}   