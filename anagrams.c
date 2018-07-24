#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* a = (char *)malloc(512000 * sizeof(char));
    scanf("%s",a);
    char* b = (char *)malloc(512000 * sizeof(char));
    scanf("%s",b);
    /*
     * While loop through until you reach a zero in the string (comparing ascii values) 0 == NULL
     * Count the size of the strings & and count the number of repeated leters and subtract
     * Keep track of repeated letters and positions to make sure they allign (this part will solve the multiple letter case)
     */
    int big, small, aSize = 0, bSize =0;
    int j = 0,i = 0, Bool = 0, count=0;
    int arr[26];
    for(int x = 0; x<26;x++){
        arr[x] = 0;
    }
    
    
    while(a[aSize++] != 0){
        arr[a[aSize-1] - 'a'] = arr[a[aSize-1] - 'a']+ 1;
    }
    while(b[bSize++] != 0){
        arr[b[bSize-1] - 'a'] = arr[b[bSize-1] - 'a']- 1;
        //printf("%d ",bSize-1);
    }
    /*if(aSize > bSize){
        big = aSize;
        small = bSize;
    }
    else{
        big = bSize;
        small = aSize;
    }
    
   for( i= 0; i <big ; i++){
        for(j=0; j<small; j++){
            if(big == aSize){
                if(a[i] == b[j]){
                    count++;
                }
            }
            else{
                if(b[i] == a[j]){
                    count++;
                }
            }
        }
    }*/
    int answ = 0, idc; //= ((aSize - count)+(bSize - count));
    
    for(idc = 0; idc < 26; idc++){
        answ = answ + (abs(arr[idc]));
        //printf("%d ", abs(arr[idc]));
    }
    
    printf("%d ", answ);
    return 0;
}
