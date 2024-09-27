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
};

DLinkedList mergelist(List *head1, List *head2){
   List *h1 = head1;
   List *h2 = head2;
   DLinkedList l3;
   
   while(h1 && h2){
      if(h1->data > h2->data){
         l3.append(h2->data);
         h2 = h2->next;
      }
      else {
         l3.append(h1->data);
         h1 = h1->next;         
      }
   }
   
   while(h1){
      l3.append(h1->data);
      h1 = h1->next;
   }
   
   while(h2){
      l3.append(h2->data);
      h2 = h2->next;
   }
   
   return l3; 
}

int main(){
   DLinkedList l1;
   l1.append(0);
   l1.append(2);
   l1.append(3);
   l1.append(5);
   l1.append(6);
   
   DLinkedList l2;
   l2.append(1);
   l2.append(3);
   l2.append(5);
   l2.append(6);
   l2.append(6); 

   DLinkedList l3 = mergelist(l1.head, l2.head);
   List *headx = l3.head;
   
   while(headx){
     cout << headx->data << " ";
     headx = headx->next;
   }
   
   return 0;
}
