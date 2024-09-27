#include<iostream>
using namespace std;

node* intersection(node *head1, node *head2) {
    while (head2) {
        node *temp = head1;
        while (temp) {
            if (temp == head2)
                return head2;
            temp = temp->next;
        }
        head2 = head2->next;
    }
    return nullptr;
}

int main(){
   node* nn = intersection(head1,head2);
   return 0;
}
