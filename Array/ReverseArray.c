#include <stdio.h>

void reverseArray(int arr[],int start,int end){
    int temp;
    while(start<end){
        temp=start;
        start=end;
        end=temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    int i;
    for (i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(void) {
	int array[] = {1,2,3,4,5,6};
	int n = sizeof(array) / sizeof(array[0]);
	printArray(array,n);
	reverseArray(array,0,n-1);
	printf("Reverse Array is:\n");
	printArray(array,n);
	return 0;
}