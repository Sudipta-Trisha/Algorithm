#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next, *prev;

    Node(){
        prev = NULL;
        next = NULL;
    }
};

Node* head, *pre;

Node* insert_node(Node* head, int data)
{
    Node* curr = new Node();
    curr->prev = NULL;
    curr->data = data;
    curr->next = NULL;

    pre = head;
    while(pre->next != NULL){
        pre = pre->next;
    }
    pre->next = curr;
    curr->prev = pre;

    return head;
}

void print_list(Node* head)
{
    cout << "Here is the whole linked list:" << endl;

    while(head->next != NULL){
        head = head->next;
        cout << head->data << " ";
    }
    cout << endl;
}

int main()
{
    head = new Node();

    int test_num;
    cout << "Enter test number: ";
    cin >> test_num;
    
    cout << "Enter numbers: ";
    while(test_num--){
        int data;
        cin >> data;
        
        head = insert_node(head,data);
    }

    print_list(head);

    return 0;
}
