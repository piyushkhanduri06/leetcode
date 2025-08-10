#include <iostream>
using namespace std;
 
class Node{
public:
    int data;
    Node* next;
};

// Function to insert while maintaining sorted order
void insert(Node*& head, int key) {
    Node* t = new Node;
    t->data = key;
    t->next = nullptr;

    // If list is empty or new node should be at the beginning
    if (head == nullptr || key < head->data) {
        t->next = head;
        head = t;
        return;
    }

    Node* p = head;
    Node* q = nullptr;

    // Find the right place to insert
    while (p != nullptr && p->data < key) {
        q = p;
        p = p->next;
    }

    // Insert between q and p
    t->next = p;
    q->next = t;
};

 void remove(Node*& head, int key){
    Node* p= head;
    Node* q= nullptr;
    if(p->data==key){
        head=p->next;
        delete(p);
        return;
    }
    while (p!=nullptr && p -> data != key)
    {
        q=p;
        p = p -> next;
    }
    q->next = p->next;
    delete(p);

 }






int main() {
 
    int A[] = {3, 5, 7, 10, 15};
 
    Node* head = new Node;
 
    Node* temp;
    Node* last;
 
    head->data = A[0];
    head->next = nullptr;
    last = head;
 
    // Create a Linked List
    for (int i=1; i<sizeof(A)/sizeof(A[0]); i++){
 
        // Create a temporary Node
        temp = new Node;  // here we created a new node and assigned temp with location of that node
 
        // Populate temporary Node
        temp->data = A[i]; // here we are assigning data of that node and location of the node to null
        temp->next = nullptr;
 
        // last's next is pointing to temp
        last->next = temp; // now last node which has pointer to null till now is being assigned to location of temp we created above.
        last = temp; // and now temp becomes the last.
    }

    

    // Display Linked List
//    insert(head , 2);
    remove(head , 3);
    Node* p = head; // we are initializing p pointer to the first node so we can loop through the linked list.
    
    while (p != nullptr){ // till it reaches the last node that is pointing to null it will loop
        cout << p->data << " -> " ;
        p = p->next;
    }
 
    return 0;
}