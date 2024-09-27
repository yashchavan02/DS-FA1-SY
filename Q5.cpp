#include<iostream>
using namespace std;
// [3,1]
int main(){
   int i,j,key;
   int arr[] = {1,3,9,5,2,1,4,2,3,7,5,7,6,7,1,0};
   int size = sizeof(arr)/sizeof(arr[0]);
   int gap = 3;
   while(gap > 0){
      for(i=gap;i<size;i++){
         key = arr[i];
         j = i - gap;
         while(j >= 0 && arr[j] > key){
            arr[j+gap] = arr[j];
            j -= gap;
         }
        arr[j+gap] = key; 
      }
     gap /= 2; 
   }
   for(int j = 0;j<size;j++){
      cout<<arr[j]<<" ";
   }
   return 0;
}