
#include <iostream>
using namespace std;

// Node class representing a single node in the linked list
class Node
{
    public:
        int data;
        Node *next;

        Node(){
            next = NULL;
        }
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

    // Push operation: Insert an element onto the top of the stuck
    int push(int value)
    {
        Node *newNode = new Node(); // 1. Allocate memory for the new node
        newNode->data = value; // 2. assign value
        newNode->next = top; // 3. set the next pointer of the new node to the current top
        top = newNode; // 4. Update the top pointer to the new node
        cout << "Push value: " << value << endl;
        return value;
    }

    // IsEmpty operation: check if the stack is empty
    bool isEmpty()
    {
        return top == NULL; // Return true if the top pointer is NULL, indication an empty
    }

    // Pop operation: Remove the topmost elemet from the stack
    void pop()
    {
        if(isEmpty())
        {
            cout << "stack is empty. " << endl;
            return; // if the stack is empty, print a massage and return
        }
        cout << "Popped value; " << top->data << endl;
        top = top->next; // Update the top pointer to the next node
    }
    // Peek/top operation: Retrieve the value of the topmost elemet without removing it
    void peek()
    {
        if (isEmpty())
        {
            cout << "List is Empty. " << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        } // Return the value of the top node
    }
};

int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 4)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter the value to push: ";
                cin >> value;
                stack.push(value); // push the entered onto the stack
                break;
            case 2:
                stack.pop(); // Pop the topmost elemetn from the stack
                break;
        }
    }
}