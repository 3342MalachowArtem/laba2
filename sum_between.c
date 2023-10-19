#include <stdio.h>
#include <stdlib.h>
#include "sum_between.h"
#include "index_first_zero.h"
#include "index_last_zero.h"
int sum_between(int arr[], int len){
    int id_min= index_first_zero(arr, len);
    int id_max= index_last_zero (arr, len);
    int sumb = 0; 
    for (int i = id_min; i<len; i++){
        if (i <= id_min){
            sumb = sumb + abs(arr[i]);
        }
    }
    return sumb;
}