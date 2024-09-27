#include<iostream>
using namespace std;

struct List {
  int data;
  List *prev;
  List *next;
};

class DLinkedList {
  public:
  List *head;
  
  DLinkedList(){
    head = nullptr;
  }

  void append(int data){
    List *nl = new List;
    nl->data = data;
    nl->prev = nullptr;
    nl->next = nullptr;
    
    if(!head){
      head = nl;
      return;
    }
    
    List *trav = head;
    while(trav->next){
      trav = trav->next;
    }
    
    trav->next = nl;
    nl->prev = trav;
  }
  void pairwiseswap(){
    List *ptr = head;
    int temp;
    while(ptr && ptr->next){
     temp = ptr->data;
     ptr->data = ptr->next->data;
     ptr->next->data = temp;
     ptr = ptr->next->next;
    }
  }
  void printList(){
    List *ptr = head;
    while(ptr){
      cout<<ptr->data<<" ";
      ptr = ptr->next;
    }   
  }
};

int main(){
   DLinkedList l1;
   l1.append(0);
   l1.append(2);
   l1.append(3);
   l1.append(5);
   l1.append(6);
   l1.pairwiseswap();
   l1.printList();
   return 0;
}
