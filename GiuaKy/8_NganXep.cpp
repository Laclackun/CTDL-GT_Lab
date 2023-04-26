// Nguon: https://topdev.vn/blog/ngan-xep-va-hang-doi-trong-c/

#include <iostream>
using namespace std;


struct Node
{
    int data;
    Node *next;
};

struct Stack
{
    Node *head;
};

void CreateStack(Stack &s)
{
    s.head = NULL;
}

Node *CreateNode(int init)
{
    Node *node = new Node;
    node->data = init;
    node->next = NULL;
    return node;
}

int IsEmpty(Stack s)
{
    if (s.head == NULL)
        return 1;
    return 0;
}

void DestroyStack(Stack &s)
{
    Node *node = s.head;
    while (s.head != NULL)
    {
        s.head = node->next;
        delete node;
        node = s.head;
    }
}

void Push(Stack &s, Node *node)
{
    if (IsEmpty(s))
        s.head = node;
    else
    {
        node->next = s.head;
        s.head = node;
    }
}

int Pop(Stack &s)
{
    if (IsEmpty(s))
        return 0;
    Node *node = s.head;
    int data = node->data;
    s.head = node->next;
    delete node;
    return data;
}

int Top(Stack s)
{
    if (IsEmpty(s))
        return 0;
    return s.head->data;
}

void PrintStack(Stack s)
{
    Node *node = s.head;
    while (node != NULL)
    {
        cout << node->data << ' ';
        node = node->next;
    }
}

int main()
{
    Stack stack;
    CreateStack(stack);

    Node *node;
    node = CreateNode(41);
    Push(stack, node);
    node = CreateNode(23);
    Push(stack, node);
    node = CreateNode(4);
    Push(stack, node);
    node = CreateNode(14);
    Push(stack, node);
    node = CreateNode(56);
    Push(stack, node);
    node = CreateNode(1);
    Push(stack, node);
    
    cout << Top(stack) << endl;
    Pop(stack);
    PrintStack(stack);

    DestroyStack(stack);

    return 0;
}