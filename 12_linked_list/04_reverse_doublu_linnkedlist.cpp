#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data: " << val << endl;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

Node *reverse(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *smallListHead = reverse(head->next);
    Node *temp = head->next;
    temp->next = head;
    head->prev = temp;
    temp->prev = NULL;
    head->next = NULL;

    return smallListHead;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    // print(head);
    // cout << getLength(head) << endl;

    insertAtHead(head, tail, 11);
    insertAtHead(head, tail, 12);
    insertAtHead(head, tail, 13);
    insertAtHead(head, tail, 14);
    insertAtHead(head, tail, 15);
    print(head);

    Node *reversedList = reverse(head);
    print(reversedList);
}