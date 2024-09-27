#include<iostream>
using namespace std;

struct Node {
	string name, email;
	string phone_no;
	Node* next;
};

class contactList {
public:
	Node* head;
	contactList() {
		head = nullptr;
	}

	void AddAtBeginContact();
	int countContacts(Node*, int = 0);
};

void contactList :: AddAtBeginContact() {
	Node* newContact = new Node;
	cin >> newContact->name >> newContact->email >> newContact->phone_no;
	newContact->next = nullptr;
	if (head == nullptr) {
		head = newContact;
	} else {
		newContact->next = head;
		head = newContact;
	}
}

int contactList :: countContacts(Node* ptr, int count) {
	if (ptr == nullptr) {
		return count;
	}
	return countContacts(ptr->next, count + 1);
}

int main() {
	contactList clist;
	clist.AddAtBeginContact();
	clist.AddAtBeginContact();
	clist.AddAtBeginContact();
	cout << clist.countContacts(clist.head) << endl;
	return 0;
}
