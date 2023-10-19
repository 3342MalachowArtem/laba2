#include "index_first_zero.h"

int index_first_zero(int arr[], int len){
    int id_min = 0;
    for (int i = 0; i<len; i++){
        if (arr[i] == 0){
            id_min = i;
            break;
        }
    }
    return id_min;
}