
#include <iostream>
using namespace std;

// Node class representing a single node in the linked list
class Node
{
    public:
        int data;
        Node *next;

        Node(
            next = NULL;
        )
};

//stuck class
class Stack
{
    private:
        Node *top; // Pointer the top node of the stack
    
    public:
    Stack(){
        top = NULL; // Initalize the stack with a null top pointer
    }
};