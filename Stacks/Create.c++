#include <bits/stdc++.h>
using namespace std;

class Stack{
    int size;
    int *arr;
    int top;
    public:
          Stack(){
            
            top=-1;
            size=50;
            arr= new int [size];
    }



void push(int x){
    top++;
    arr[top]=x;
}

int pop(){
    int x= arr[top];
    top--;
    return x;
}

int Top(){
   int x=top[arr];
    return x;
}

int Size(){
    size = top+1;
    return size;
}
};
int main(){
    Stack s;
    s.push(2);
    s.push(5);
    s.push(7);
    s.push(9);

    cout<<"the top element is " << s.Top()<<endl;
    cout << "the deleted elemet is " << s.pop()<<endl;
    cout << " the size is  " << s.Size()<<endl;
}