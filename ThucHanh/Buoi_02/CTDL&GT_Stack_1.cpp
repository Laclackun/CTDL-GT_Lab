// Nguon: https://topdev.vn/blog/ngan-xep-va-hang-doi-trong-c/

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

void PrintStack(Stack s)
{
    Node *node = s.head;
    while (node != NULL)
    {
        cout << node->data << ' ';
        node = node->next;
    }
}