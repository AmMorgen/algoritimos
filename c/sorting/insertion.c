#include<stdio.h>
void insertion_cres(int arr[], int n){
     int i, chave, j;
     for(i = 1; i<n;i++){
          chave = arr[i];
          j = i-1;

     while(j >= 0 && arr[j]> chave){
          arr[j+1] = arr[j];
          j = j-1;
     }
     arr[j+1]= chave;
     }
}
void insertion_descres(int arr[], int n){
     int i, chave, j;
     for(i = 1; i <n;i++){
          chave = arr[i];
          j = i-1;

     while(j >= 0 && arr[j]< chave){
          arr[j+1] = arr[j];
          j = j-1;
     }
     arr[j+1]= chave;
     }
}

void printArray(int arr[], int n){
     int i;
     for(i = 0; i < n; i++){
          printf("%d ", arr[i]);
         
     }

}
int main(){
     int arr[]={4,7,2,5,4,0};
     int n = sizeof(arr)/ sizeof(arr[0]);
     printArray(arr, n);
     printf("\n");
     insertion_cres(arr, n);
     printArray(arr,n);
     printf("\n");
     insertion_descres(arr, n);
     printArray(arr, n);
     printf("\n");
    return 0;
    }