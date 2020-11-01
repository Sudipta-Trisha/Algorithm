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
Node* head, *tmp, *ptr1, *ptr2;

void insert(int data)
{
    Node* pres = new Node();
    pres->data = data;
    tmp->next = pres;
    tmp = pres;
}

void add_data_at_pos(Node* head, int data, int pos)
{
    ptr1 = head;
    ptr2 = new Node();
    ptr2->data = data;
    ptr2->next = NULL;

    while(pos != 1){
        ptr1 = ptr1->next;
        pos--;
    }

    ptr2->next = ptr1->next;
    ptr1->next = ptr2;
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
    
    int data,pos;
    cout << "Enter the position where you want to add data: ";
    cin >> pos;

    cout << "Enter data: ";
    cin >> data;

    add_data_at_pos(head,data,pos);
    print_list(head);

    return 0;
}
