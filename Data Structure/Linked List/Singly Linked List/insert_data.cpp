//ADD VALUE TO LINKED LIST(SINGLY LINKED LIST)
//PRINT LINKED LIST

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(){
        next = NULL;
    }
};
Node* head, *tmp;

void insert(int data)
{
    Node* pres = new Node();
    pres->data = data;
    tmp->next = pres;
    tmp = pres;
}

void print_list(Node* head)
{
    cout << "Here is the linked list: ";

    while(head->next != NULL){
        head = head->next;
        cout << head->data << " ";   
    }
    cout << endl;
}

int main()
{
    head = new Node();
    tmp = head;

    int test;
    cout << "Enter test number: ";
    cin >> test;

    cout << "Enter numbers: ";
    while(test--){
        int data;
        cin >> data;
        insert(data);
    }

    print_list(head);

    return 0;
}
