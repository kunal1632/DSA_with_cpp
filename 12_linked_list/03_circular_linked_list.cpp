#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {

        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for the node with the data: " << val << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{

    // assuming that the element is present in the list

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non empty list
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // elemnt found -> curr is representing the element node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node *&tail, int value)
{
    // empty list
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    else
    {
        // non empty
        // assuming that the value is present in the list
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        // only 1 node is present in the list
        if (curr == prev)
        {
            tail = NULL;
        }
        // for 2 or more then 2 nodes
        else if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *tail)
{
    Node *temp = tail;

    // empty list
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

bool isCircular(Node *head)
{
    // empty list check
    if (head == NULL)
    {
        return false;
    }

    Node *temp = head->next;
    while (temp == NULL && temp != head)
    {
        temp = temp->next;
    }

    if (temp = NULL)
    {
        return false;
    }
    return true;
}

Node *floyedDetectLoop(Node *head)
{
    if (head == NULL)
    {
        return head;
    }

    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            cout << "present at : " << slow->data << endl;
            return slow;
        }
    }
    cout << "loop is not present in the linked list " << endl;
    return NULL;
}

Node *getIntersectingNode(Node *head)
{
    if (head == NULL)
    {
        return head;
    }

    Node *intersection = floyedDetectLoop(head);
    Node *slow = head;

    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *startOfLoop = floyedDetectLoop(head);
    Node *temp = startOfLoop;
    while (temp->next != startOfLoop)
    {
        temp = temp->next;
    }

    temp->next = NULL;
}

int main()
{
    Node *tail = NULL;
    insertNode(tail, 5, 3);
    print(tail);

    deleteNode(tail, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);

    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 5, 4);
    print(tail);

    deleteNode(tail, 10);
    print(tail);

    deleteNode(tail, 6);
    print(tail);

    if (isCircular(tail))
    {
        cout << "Linked list is circular in nature" << endl;
    }
    else
    {
        cout << "Linked list is not ciclular in nature" << endl;
    }

    floyedDetectLoop(tail);
    cout << getIntersectingNode(tail)->data << endl;

    removeLoop(tail);
    floyedDetectLoop(tail);

    return 0;
}