#include "index_last_zero.h"

int index_last_zero(int arr[], int len){
    int id_max = 0; 
    for (int i = len-1; i >=0; i--){
        if (arr[i]==0){
            id_max=i;
            break;
        }
    }
    return id_max;
}