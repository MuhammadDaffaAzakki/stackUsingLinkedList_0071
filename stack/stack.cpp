#include <iostream>
using namespace std;

//Node class representing a single node in the linked list
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};
// Stack class
class Stack
{
private:
    Node *top; // Pointer to the top node of the stack

public:
    Stack()
    {
        top = NULL; //initialize the stack with a null top
    }

    // Push operation: insert an element onto the top 
    int push(int value)
    {
        Node *newNode = new Node(); // 1.Allocate memory
        newNode->data = value; //2. assign value
        newNode->next = top; //3. set the next point
        top = newNode;  // 4. update the top point
        cout << "Push value: " << value << endl;
        return value;
    }
    // pop operation
    void pop()
    {
        Node *temp = top;
        if (isEmpty())
        {
            cout << " Stack is empty. " << endl;
            return;
        }

        cout << "Popped value: " << temp->data << endl;
        top = temp->next; // update the top pointer_safety
        delete temp;
    }
}