#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        Node* next;
        int data;

    Node(Node* next1 , int data1){
        next= next1;
        data=data1;

    }
    Node(int data1){
        data= data1;
        next=nullptr;
    }
};


 
Node* middleNode(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast-> next != NULL ){
        fast = fast -> next->next;
        slow = slow-> next;
    }
    return slow;
}

int main(){
    vector<int> arr ={1,3,5,6}; 
    Node* head = new Node(arr[0]);
    head -> next = new Node(arr[1]);
    head -> next -> next = new Node(arr[2]);
    head-> next -> next -> next = new Node(arr[3]);
    
    Node* res = middleNode(head);
    cout<< "the middle node is "<<res->data;
 

}