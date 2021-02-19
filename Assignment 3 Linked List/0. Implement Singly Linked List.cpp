#include <bits/stdc++.h>
using namespace std;

struct Node
{
        int data; 
        Node* next;

        Node(int data)
        {
                this->data = data ;
                next = NULL ;
        }
};

Node* createLinkedList(int n)
{
        Node* head = NULL ;
        Node* tail = NULL ;
        for(int i = 0 ; i < n ; i++)
        {
                int data ;
                cin >> data;
                Node *newNode = new Node(data) ;
                if(head == NULL)
                {
                        head = newNode;
                        tail = newNode;
                }
                else
                {
                        tail->next = newNode;
                        tail = newNode;
                }
        }
        return head;
}

void printLinkedList(Node* head)
{
        Node* temp = head;
        if(temp == NULL)
        {
                cout << "Linked list is empty." << endl ;
        }
        else
        {
                while (temp != NULL)
                {
                        cout << temp -> data << " " ;
                        temp  = temp -> next ;
                }
                
        }
}

int main()
{
        int n ;
        cin >> n ;
        Node* head = createLinkedList(n) ;
        printLinkedList(head);
        return 0;
}