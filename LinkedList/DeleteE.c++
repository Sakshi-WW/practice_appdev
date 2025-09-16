#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        Node* next;
        int data;
    
    Node( int data1,Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data=data1;
    }
};

void printLL(Node* head){
    while(head!=NULL){
        cout<< head->data << " ";
        head = head -> next;
    }
}

Node* deleteNodeAtTail(Node* head){
    if(head==NULL || head -> next == NULL){
        return 0;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp ->next;
    }   
    delete temp -> next;
    temp -> next = nullptr;
    return head;    
}
int main(){
    vector<int> arr={2,4,5};
    Node* head = new Node(arr[0]);
    head -> next = new Node(arr[1]);
    head -> next -> next = new Node(arr[2]);
    
    head = deleteNodeAtTail(head);
    
    printLL(head);
}