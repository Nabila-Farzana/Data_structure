#include <iostream>
class Node{ 
    public:
    int data; 
    Node* next;
};

int main() {
    // Write C++ code here
    Node *head, *middle, *last;
    
    head = new Node();
    middle = new Node();
    last = new Node();
    
    head->data = 10;
    middle->data = 20;
    last->data = 30;
    
    head->next = middle;
    middle->next = last;
    last->next = NULL;
    
    Node *temp = head;
    while(temp != NULL){
          std::cout << temp->data<<std::endl;
          temp= temp->next;
    }

}
