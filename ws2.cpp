#include <iostream>
using namespace std;

// Part 1.1 Complete the node declaration
struct Node
{
  Node(int num);
  int data;
  Node *next;
};

// Part 1.2 Define the Node constructor

Node::Node(int num){
  next = nullptr;
  data = num;
}
//constants
const int SENTINEL = -999;

//print function
void printList(Node *head);

//main
int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    int num = 0;
    cout << "Enter a number to add to the list (" << SENTINEL << " to end)";
    cin >> num;
    while (num != SENTINEL) {
        // Part 2, create a new node pointer, and append it to the list.
      Node *ptr = new Node(num);
      if(head == nullptr){
        tail = ptr;
      }
      else{
        ptr->next = head;
      }
      head = ptr;
        cout << "Enter a number to add to the list (" << SENTINEL << " to end)";
        cin >> num;
    }

	printList(head);
  Node * deleteNode = head->next;
  delete head;
  head = deleteNode;
  if(head == nullptr){
    tail == nullptr;
  }
  printList(head);
    
    // Part 3, delete the list
    while(head != nullptr){
      Node *remove = head->next;
      delete head;
      head = remove;
    }
    delete tail;
    tail = nullptr;

    return 0;
}

// Part 4 fill in the print function to print the list
void printList(Node *head) {
  Node *ptr = head;
  while(ptr != nullptr){
    cout << ptr->data << endl;
    ptr = ptr->next;
  }
}
