#include<iostream>
using namespace std;

int main(){
   int arr[] = {0,1,2,3,5,6};
   int size = sizeof(arr)/sizeof(arr[0]);
   int sum = ((size)*(size+1))/2;
   int arrsum = 0;
   for(int i=0;i<size;i++){
      arrsum += arr[i];
   }
   cout<<(sum-arrsum);
   return 0;
}