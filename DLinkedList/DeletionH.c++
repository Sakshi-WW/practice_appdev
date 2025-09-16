#include<bits/stdc++.h>
using namespace std;

 class Node{
    public:
        int data;
        Node* next;
        Node* prev;

    Node(int data1 , Node* next1,Node* prev1){
        data= data1;
        next = next1;
        prev=prev1;
    }
    Node(int data1){
        data = data1;
        next=nullptr;
        prev=nullptr;
    }
    

};
Node* array2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    int length= arr.size();
    for(int i=1;i<=length-1 ; i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev-> next = temp;
        prev=temp;
    }
    return head;
}

Node* deleteHead(Node* head){
    if(head == NULL || head -> NULL){
        return NULL;
    }
    Node* back = head;
    head = head-> next;
    back-> next = nullptr;
    head -> prev = nullptr;
    delete back;

    return head;
}

void printLL(Node* head){
    while(head != NULL){
        cout << head -> data<<" ";
        head = head -> next;

    }
}

int main(){
    vector<int> arr = {1,3,4,6};
    Node* head = array2DLL(arr);
    cout << "The original LL : ";
    printLL(head);
    cout << endl;
    head = deleteHead(head);
    cout << "Without head node : ";
    printLL(head);
    

    
}
