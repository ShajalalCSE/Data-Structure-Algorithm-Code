#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void creatlist(Node *newNode, int item)
{
    int x;

    newNode->data = item;
    cin >> x;

    if (x == 0)
    {
        newNode->next = nullptr;
        return;
    }

    newNode->next = new Node();
    creatlist(newNode->next, x);
}

void traverse(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{

    int item;
    Node *head;
    head = new Node();

    cin >> item;
    creatlist(head, item);
    traverse(head);

   
}