#include<iostream>
using namespace std;

int main(){
   int arr[] = {1,3,5,6,2,0,10,8,4,5};
   int i,j,key,size = sizeof(arr)/sizeof(arr[0]);
   for(i=1;i<size;i++){
      key = arr[i];
      j = i - 1;
      while(j>=0 && arr[j]>key){
         arr[j+1] = arr[j];
         j--;
      }
     arr[j+1] = key; 
   }
   int sum = 0;
   for(int i=0;i<size;i=i+2){
      sum += arr[i];
   }
   cout<<sum<<endl;
   return 0;
}