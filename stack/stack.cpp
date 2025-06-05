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
        top = temp->next; // update the top pointer
        delete temp;
    }
    // peek/Top operation
    void peek()
    {
        if (isEmpty())
        {
            cout << "List is empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current !=NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        } // return the value
    }

    bool isEmpty()
    {
        return top == NULL; // return true if the top pointer
    }
};

int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice !=5)
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
        cout << " Enter the value to push : ";
        cin >> value;
        stack.push(value);
        break;

    case 2:
        stack.pop();
        break;
    case 3:
        stack.peek();
        break;
    
}