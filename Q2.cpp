#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

void LinkedList(struct Node *ptr) {
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

void removeDuplicate(struct Node *head) {
    struct Node *ptr1 = head;
    while (ptr1 && ptr1->next) {
        struct Node *ptr2 = ptr1;
        while (ptr2->next) {
            if (ptr1->data == ptr2->next->data) {
                struct Node *temp = ptr2->next;
                ptr2->next = temp->next;
                delete temp;
            } else {
                ptr2 = ptr2->next;
            }
        }
        ptr1 = ptr1->next;
    }
}


int main() {
    struct Node *Head = new Node;
    struct Node *Second = new Node;
    struct Node *Third = new Node;
    struct Node *Fourth = new Node;
    struct Node *Fifth = new Node;
    struct Node *Sixth = new Node;

    Head->data = 1;
    Head->next = Second;

    Second->data = 2;
    Second->next = Third;

    Third->data = 1;
    Third->next = Fourth;

    Fourth->data = 2;
    Fourth->next = Fifth;

    Fifth->data = 1;
    Fifth->next = Sixth;

    Sixth->data = 6;
    Sixth->next = NULL;

    removeDuplicate(Head);
    LinkedList(Head);

    delete Head;
    delete Second;
    delete Third;
    delete Fourth;
    delete Fifth;
    delete Sixth;

    return 0;
}
