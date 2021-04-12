#include<iostream>
using namespace std;
#define max 10000

class Stack{
    int top;
    public:
        int arr[max];
        Stack(){
            top=-1;
        }

        bool push(int x);
        bool isempty();
        int pop();
        int peek();
        int size();
};

int Stack:: peek(){
    if(top<0){
        cout<<"Stack is Empty"<<endl;
        return 0;
    }else{
        int x = arr[top];
        return x;
    }
}
bool Stack::push(int x){
    if(top>=(max-1)){
        cout<<"Stack overflow"<<endl;
        return false;
    }else{
        arr[++top] = x;
        cout<<x<<" Pushed into stack"<<endl;
        return true;
    }
}

bool Stack::isempty(){
    if(top<0)
        return true;
    return false;
}
int Stack::pop(){
    if(top<0){
        cout<<"Stack Underflow"<<endl;
        return 0;
    }else{
        int x = arr[top--];
        return x;
    }
}

int Stack::size(){
    return top+1;
}
int main(){
    class Stack s;
    s.push(20);
    s.push(32);
    s.push(98);
    while(!s.isempty()){
        int x = s.pop();
        cout<<x<<" ";
    }
    return 0;
}