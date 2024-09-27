#include<iostream>
using namespace std;

int main(){
   string book[] = {"aebh","hjhhh","aejh","aebhgf"};
   int i,j,size = sizeof(book)/sizeof(book[0]);
   string key;
   for(i=1;i<size;i++){
      key = book[i];
      j = i - 1;
      while(j>=0 && book[j]>key){
         book[j+1] = book[j];
         j--;
      }
      book[j+1] = key;
   }
   for(int i=0;i<size;i++){
      cout<<book[i]<<" ";
   }
   return 0;
}