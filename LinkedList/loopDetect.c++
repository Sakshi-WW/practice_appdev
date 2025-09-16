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


 
int detectLoop(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!= NULL && fast-> next!=NULL ){
        fast = fast -> next -> next;
        slow = slow-> next;
        if(fast==slow){
            return 1;
        }
        
    }
    return 0;
}


int main(){
   Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
     
    fifth->next = third; 

    
    if (detectLoop(head)) {
        cout << "it is a loop." << endl;
    } else {
        cout << "Not a loop" << endl;
    }

    
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}