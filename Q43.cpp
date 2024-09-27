#include<iostream>
using namespace std;

int main(){
   int arr[] = {8,1,2,2,3};
   int count = 0 , size = sizeof(arr)/sizeof(arr[0]);
   int ans[size];
   for(int i=0;i<size;i++){
      int count = 0;
      for(int j=0;j<size;j++){
         if(arr[j]<arr[i]){
            count++;
         }
      }
     ans[i] = count; 
   }
   for(int i=0;i<size;i++){
      cout<<ans[i]<<" ";
   }
   return 0;
}