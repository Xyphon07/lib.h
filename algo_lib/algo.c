#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ALGO_H_IMPLEMENTATION
#include "algo.h"
int main(int argc,char **argv){
int arr[5]={1,20,333,4,5};
int arr2[5]={1,20,333,4,5};
in_sort(arr,5);
in_sortRev(arr2,5);
for(int i=0; i<=4;i++){
printf(" \n %d \n this from where it reverses \n %d",arr[i],arr2[i]);


}
return 0;
}

