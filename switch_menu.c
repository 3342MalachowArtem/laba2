#include "switch_menu.h"                     
#include <stdio.h>

result = 0;

int switch_menu(int a, int *arr,
int size) {

switch (a){
    case 0:
        result = index_first_zero(arr, size);
        break;
    case 1:
        result = index_last_zero(arr, size);
        break;
    case 2:
        result = sum_between
(arr, size);
        break;
    case 3:
        result = sum_before_and_after(arr, size);
        break;
    default:
        return 0;
}

return result;
}