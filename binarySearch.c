#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 100

void sort(int array[],int size);
int binarySearch(int array[],int size,int num);
void printResult(int result,int num);
void printArray(int array[],int size);

int main(){

    srand(time(NULL));

    int array[SIZE];
    int num = 1+rand()%100;

    for(int i=0;i<SIZE;i++){
        array[i] = 1+rand()%100;
    }

    puts("\nBefore sorted\n");
    printArray(array,SIZE);
    sort(array,SIZE);
    puts("\nAfter sorted\n");
    printArray(array,SIZE);
    printResult(binarySearch(array,SIZE,num),num);

    return 0;
}


void sort(int array[],int size){
    int temp;

    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){

            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }

        }
    }
}

int binarySearch(int array[],int size,int num){
    int firstIndex = 0;
    int lastIndex = size-1;

    int temp=size;
    int counter=0;
    for(int i=0;1;i++){
        
        if(num == array[(int)(lastIndex + firstIndex)/2]){
            return (lastIndex + firstIndex)/2;
        }else if(num == array[(int)(lastIndex + firstIndex)/2]){
            return (lastIndex + firstIndex)/2;
        }else if(num >= array[(int)(lastIndex + firstIndex)/2]){
            firstIndex = (int)(lastIndex + firstIndex)/2;
        }else if(num <= array[(int)(lastIndex + firstIndex)/2]){
            lastIndex = (int)(lastIndex + firstIndex)/2;
        }

        if((lastIndex - firstIndex) <= 1){
            return -1;
        }
    }

}

void printArray(int array[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
        if(i%10==9){
            puts("");
        }
    }
}

void printResult(int result,int num){
    printf("\nNumber is:%d    ",num);
    if(result==-1){
        puts("Number not found\n");
    }else{
        printf("it is found in %d. index\n",result);
    }
}


