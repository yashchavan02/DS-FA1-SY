#include<iostream>
using namespace std;

bool check(int *arr,int size){
   for(int i=1;i<size;i++){
      if(arr[i-1]==arr[i]){
         return true;
      }
   }
   return false;
}

int main(){
   int arr[] = {1,2,3,4,5,6};
   int i,j,key , size = sizeof(arr)/sizeof(arr[0]);
   for(i=1;i<size;i++){
      key = arr[i];
      j = i - 1;
      while(j>=0 && arr[j]>key){
         arr[j+1] = arr[j];
         j--;
      }
     arr[j+1] = key; 
   }
   cout<<check(arr,size);
   return 0;
}