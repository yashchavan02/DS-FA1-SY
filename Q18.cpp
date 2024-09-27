#include <iostream>
using namespace std;

struct List {
    string data;
    struct List *next;
};

class LinkedList {
public:
    List *head;
    LinkedList() {
        head = nullptr;
    }
    
    void append(string data) {
        List *nl = new List;
        nl->data = data;
        nl->next = nullptr;
        
        if (!head) {
            head = nl;
            return;
        }
        
        List *trav = head;
        while (trav->next) {
            trav = trav->next;
        }
        
        trav->next = nl;
    }

    List* nthnode(int pos) {
        struct List *first = head;
        
        for (int i = 1; i < pos; i++) {
            if (first == nullptr) {
                cout << "Position not found";
                return NULL;
            }
            first = first->next;
        }
        return first;
    }

    void printList(struct List *ptr) {
        while (ptr != NULL) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
};

int main() {
    LinkedList l;
    l.append("1a");
    l.append("2b");
    l.append("3c");
    l.append("4d");
    l.append("5e");
    l.append("6f");
    l.append("7g");
    l.append("8h");
    l.append("9i");
    cout << l.nthnode(3)->data; 
    return 0;
}
