#include<iostream>
using namespace std;

int main(){
   int arr[] = {0,1,1,1,0,2,0,1,2,2,0};
   int size = sizeof(arr)/sizeof(arr[0]);
   int temp[3] ={0};
   for(int i=0;i<size;i++){
     temp[arr[i]]++;
   }
   int j = 0;
   for(int i=0;i<3;i++){
     while(temp[i]--){
       arr[j++] = i;
     }
   }
   for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
   }
   return 0;
}