// Nguon: https://topdev.vn/blog/ngan-xep-va-hang-doi-trong-c/

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Queue
{
    Node *head;
    Node *tail;
};

void CreateQueue(Queue &q)
{
    q.head = NULL;
    q.tail = NULL;
}

Node* CreateNode(int init)
{
    Node *node = new Node;
    node->data = init;
    node->next = NULL;
    return node;
}

int IsEmpty(Queue q)
{
    if (q.head == NULL)
        return 1;
    return 0;
}

void DestroyQueue(Queue &q)
{
    Node *node = q.head;
    while (q.head != NULL)
    {
        q.head = node->next;
        delete node;
        node = q.head;
    }
    q.tail = NULL;
}

void EnQueue(Queue &q, Node *node)
{
    if (IsEmpty(q))
    {
        q.head = node;
        q.tail = node;
    }
    else
    {
        q.tail->next = node;
        q.tail = node;
    }
}

int DeQueue(Queue &q)
{
    if (IsEmpty(q))
        return 0;
    Node *node = q.head;
    int data = node->data;
    q.head = node->next;
    delete node;
    if (q.head == NULL)
        q.tail = NULL;
    return data;
}

int Front(Queue q)
{
    if (IsEmpty(q))
        return 0;
    return q.head->data;
}

void PrintQueue(Queue q)
{
    Node *node = q.head;
    while (node != NULL)
    {
        cout << node->data << ' ';
        node = node->next;
    }
}

int main()
{

    Queue queue;
    CreateQueue(queue);

    Node *node;
    node = CreateNode(41);
    EnQueue(queue, node);
    node = CreateNode(23);
    EnQueue(queue, node);
    node = CreateNode(4);
    EnQueue(queue, node);
    node = CreateNode(14);
    EnQueue(queue, node);
    node = CreateNode(56);
    EnQueue(queue, node);
    node = CreateNode(1);
    EnQueue(queue, node);


    cout << DeQueue(queue) << endl;
	DeQueue(queue);
	node = CreateNode(55);
    EnQueue(queue, node);
    PrintQueue(queue);

    return 0;
}