//Basic Method
#include <stdio.h>

int main()
{
  int arr[] = {1000, 11, 445, 1, 330, 3000};
  int size = 6;
  int min,max;
  min=arr[0];
  max=arr[0];
  for (int i =0; i<size; i++){
      if(arr[i]>max){
        max=arr[i];
      }
      else if(arr[i]<min){
        min=arr[i];
      }
  }
  printf("Minimum element is %d", min);
  printf("\nMaximum element is %d", max);
} 


//Using Functions

#include <stdio.h>

int getResults (int arr[] , int n){
    int min,max;
    //For Array with one element
    if (n==1){
        min=arr[0];
        max=arr[0];
    }
    //For Array with more than one element
    if(arr[0]>arr[1]){
        min=arr[1];
        max=arr[0];
    } else {
        min=arr[0];
        max=arr[1];
    }
    for (int i=2;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }

    printf("Minimum element is %d", min);
    printf("\nMaximum element is %d", max);
}


int main()
{
  int arr[] = {1000, 11, 445, 1, 330, 3000};
  int size = 6;
  getResults(arr,size);
} 