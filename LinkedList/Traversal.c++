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
int lengthOfNode(Node* head){
    Node* temp = head;
    int cnt=0;

    while(temp != nullptr){
        cnt++;
        temp = temp-> next;
    }
    return cnt;

}

int main(){
    vector<int> arr={2,4,5};
    Node* head= new Node(arr[0]);
    head-> next= new Node(arr[1]);
    head-> next -> next = new Node(arr[2]);

    int count = lengthOfNode(head);
    cout << count ;
}