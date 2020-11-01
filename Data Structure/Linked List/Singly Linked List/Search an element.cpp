// Search an element in a singly linked list 

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

bool search_element(Node* head, int element)
{
    tmp = head;
    while(tmp != NULL){
        if(tmp->data == element){
            return true;
        }
        tmp = tmp->next;
    }
    return false;
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

    int element;
    cout << "Enter the element which you want to search: ";
    cin >> element;

    if(search_element(head,element)) 
        cout << "This element has already in the list." << endl;
    else cout << "Element is not found." << endl;

    return 0;
}
