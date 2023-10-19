#include <stdio.h>
#include <stdlib.h>
#include "input_menu.h"
#include "input.h"
#include "switch_menu.h"
#include "output.h"
#include "index_first_zero.h"
#include "index_last_zero.h"


int main() {
    int a = 0;
    int arr[N];
    int size = 0;
    
    input(&size, &a, arr); 
    int result = switch_menu(a, (int*)arr, size);
    output(result);
    return 0;
}
