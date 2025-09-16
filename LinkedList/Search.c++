#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        Node* next;
        int data;
    

    Node(Node*next1 , int data1){
        next = next1;
        data= data1;

    }
    Node(int data1){
        data=data1;
    }
};

void printLL(Node* head){
    while(head != NULL){
        cout << head-> data<<" ";
        head = head -> next;
    }
}

int searchNode(Node* head , int val){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data==val){
            return 0;
        }
        else{
            return 1;
        }
        temp= temp->next;
    }
}

int main(){
    vector<int> arr = {1,2,4};
    Node* head = new Node(arr[0]);
    head.next = new Node(arr[1]);
    head.next.next = new Node(arr[2]);

    int val = 4;

    int result = searchNode(head,val);
    if(result == 0){
        cout << "Number Found";
    }
    else{
        cout<< "number not found";
    }
    printLL(head);

}
