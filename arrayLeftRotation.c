#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
/*
A left rotation of an array
provided the number of elements
the number of rotations
and the elements within the array
*/
int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    //for loop which its index in the loop corresponds to the indexof the number within the array
    //using the index just move the number into its correct spot based on modular arithmetic and subtractions from the end
    int *temp = malloc(sizeof(int) * n), N = k%n;
    int spot = n - N;// N - k;
    for(int index = 0;  index < n; index ++){
        temp[(spot + index)% n] = a[index];
    }
    for(int index = 0; index < n; index++){
        printf("%d ", temp[index]);
    }
    return 0;
}
