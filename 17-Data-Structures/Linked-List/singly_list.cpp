#include <iostream>
using namespace std;

class Node {
    public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        next = NULL;
    }

};


class List {
    Node* head;
    Node* tail;

    public:
    List() {
        head = tail = NULL;
    }

    Node* find_tail() {
        Node* temp = head;

        while (temp->next) temp = temp->next;
        
        return temp;
    }

    void push_front(int val) { 
        Node* newNode = new Node(val);

        newNode->next = head;
        head = newNode;
        if (!tail) tail = newNode;
    }

    void push_back(int val) {
        //Node* tail = find_tail();

        Node* newNode = new Node(val);

        if (!head) {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;

    }

    void insert_after(int tarVal, int val) {
        Node* temp = head;

        while (temp && temp->val != tarVal) temp = temp->next;

        if (!temp) {cout << "Element Not found" << endl; return; }

        Node* newNode = new Node(val);

        newNode->next = temp->next;

        temp->next = newNode;

        if (temp == tail) {
            tail = newNode;
        }
    }

    void insert_before(int tarVal, int val) {
        if (!head) return;

        if (head->val == tarVal) {
            push_front(val);
            return;
        }

        Node* temp = head;

        while (temp->next && temp->next->val != tarVal) temp = temp->next;

        if (!temp->next) { cout << "Element Not found" << endl; return; }

        Node* newNode = new Node(val);

        newNode->next = temp->next;

        temp->next = newNode;


    }


    void print() {
        Node* temp = head;

        while (temp) {
            cout << temp->val << " --> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

};
void push_front(Node*& head, int val) {
    Node *temp = new Node(val);
    temp->next = head;
    head = temp;
}

void push_back() {

}

void print(Node* head) {
    while (head) {
        cout << head->val << " --> ";
        head = head->next;
    }

    cout << "NULL" << endl;
}

int main() {
    // Node* head = new Node(1);
    // push_front(head,7);
    // print(head);



    List ll;

    ll.push_front(5);

    ll.push_back(6);
    ll.push_back(9);
    ll.push_back(8);

    ll.insert_after(6, 7);
    ll.insert_before(9, 10);

    ll.print();
    return 0;
}