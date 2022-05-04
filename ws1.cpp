#include <iostream>
using namespace std;

// Part 1.1 Complete the node declaration
struct Node
{
};

// Part 1.2 Define the Node constructor

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
    
        cout << "Enter a number to add to the list (" << SENTINEL << " to end)";
        cin >> num;
    }

	printList(head);
    
    // Part 3, delete the list


    return 0;
}

// Part 4 fill in the print function to print the list
void printList(Node *head) {
}
