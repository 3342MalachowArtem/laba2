#include <stdio.h>
#include <stdlib.h>
#include "sum_between.h"
#include "sum_before_and_after.h"
#include "index_first_zero.h"
#include "index_last_zero.h"

int sum_before_and_after(int arr[], int len){
    int sumb = sum_between(arr, len);
    int sumba = 0; 
    for (int i = 0; i<len; i++){
        sumba = sumba + abs(arr[i]);      
    }
    return (sumba - sumb);
}