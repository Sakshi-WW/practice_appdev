#include<bits/stdc++.h>
using namespace std;


bool isValid(string s){
    stack<char> ss;
    for(auto it:s){
        if(it=='('|| it=='{'||it=='[') ss.push(it);
        else{
            if(ss.size()==0){
                return false;
            }
            char ch=ss.top();
            ss.pop();
            if ( (it == ')' && ch == '(') || 
     (it == '}' && ch == '{') || 
     (it == ']' && ch == '[') ) {
    continue;
} else {
    return false;
}
        }
    }
    return ss.empty();
}


int main(){
    string s = "()";
    bool res= isValid(s);
    if ( res == true){
        cout<< "the paren are balanced";
    }
    else{
        cout << "the paren are not balanced";
    }
}