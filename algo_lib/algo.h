
#ifndef ALGO_H_INCLUDE_H
#define ALGO_H_INCLUDE_H
int * in_sort(int *num,int size);
int * heap_sort(int *num,int size);
int * in_sortRev(int *num,int size);
#endif
#ifdef ALGO_H_IMPLEMENTATION
#ifndef _AND
#define and &&
#endif

int * in_sort(int * num, int size){
    for(int i = 1; i < size; i++){ 
        int temp = num[i];
        int j = i - 1;
        
        while(j >= 0 and  num[j] > temp) {
            num[j+1] = num[j]; 
            j--;
        }
        num[j+1] = temp;
    }
    return num;
}
int * in_sortRev(int *num, int size){
for(int i=1;i< size;i++){
int temp=num[i];
int j=i-1;
while(j>=0 and  num[j] <temp){
num[j+1] = num[j];
j--;

}
num[j+1] = temp;
}
return num;

}
int * heap_sort(int *num,int size){


return num;
}
#endif //ALGO_H_IMPLEMENTATION

