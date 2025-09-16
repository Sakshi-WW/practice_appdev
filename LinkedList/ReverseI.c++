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

void printLL(Node* head){
    
    while(head!=NULL){
        cout << head-> data << " ";
        head = head -> next;
    }
}


int main(){
    vector<int> arr ={1,3,5,6,7};
    Node* head = new Node(arr[0]);
    head -> next = new Node(arr[1]);
    head -> next -> next = new Node(arr[2]);
    head-> next -> next -> next = new Node(arr[3]);
    head-> next-> next -> next-> next = new Node(arr[4]);

    head=ReverseRec(head);

    printLL(head);

}