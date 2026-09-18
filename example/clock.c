#include <stdio.h>
#define CLOCK_IMPLEMENTATION
#include "clock.h"
int main(int *argc,char **argv){
    //use these if you are  in loop 
printf("%d \n",sec());
printf("%d \n",min());
printf("%d \n",hour());
//these just return once using these inside loop will only give same time
printf("%d \n",return_sec());
printf("%d \n",return_hour());
printf("%d \n",return_min());
//i dont know why i added num to bin in this but it's is here 
printf("%d \n",return_bin(777));
return 0;
}

