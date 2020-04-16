#include "sorting.h"
#include <stdio.h>
#include <iostream>


int sorted[10];

int main(){

    int chap[10];

    std::cout << "10개의 정수 입력" <<std::endl;

    for(int j=0;  j<10;j++)
    std::cin >> chap[j];

    //for(int k=0; k<10; k++)
    //printf("%d ",sorted[k]);
    
    merge_sort(chap,0,9);


   for(int k=0; k<10; k++)
   sorted[k]=chap[k];


    for(int i=0; i<10; i++)
    printf("%d ",sorted[i]);

    return 0;
}