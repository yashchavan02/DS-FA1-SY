#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}
    void append(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    int countOccurrences(int target) {
        int count = 0;
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == target) {
                count++;
            }
            temp = temp->next;
        }
        return count;
    }
};

int main() {
    LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(2);
    list.append(2);
    list.append(2);
    int target = 9;
    int occurrences = list.countOccurrences(target);
    cout << occurrences << endl;
    return 0;
}
