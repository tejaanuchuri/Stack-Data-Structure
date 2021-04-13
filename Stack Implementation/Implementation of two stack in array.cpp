#include<iostream>
using namespace std;

class twostack{
    public:
        int *arr;
        int top1,top2;
        int size;
    twostack(int n){
        size = n;
        arr = new int[n];
        top1 = (n/2)+1;
        top2 = (n/2);         
    }
    void push1(int x);
    void push2(int x);
    int pop1();
    int pop2();
};
void twostack::push1(int x){
    if(top1>0){
        arr[--top1] = x;
    }else{
        cout<<"Stack Overflow "<<x<<endl;
    }
    return ;
}

void twostack::push2(int x){
    if(top2<(size-1)){
        arr[++top2] = x;
    }else{
        cout<<"Stack Overflow "<<x<<endl;
    }
    return ;
}


int twostack::pop1(){
    if(top1<=(size/2)){
        int x = arr[top1++];
        return x;
    }else{
        cout<<"Stack Underflow"<<endl;
        return -1;
    }
}

int twostack::pop2(){
    if(top2>=(size/2)+1){
        int x = arr[top2--];
        return x;
    }else{
        cout<<"Stack Underflow"<<endl;
        return -1;
    }
}

int main(){
    class twostack s(5);
    s.push1(5);
    s.push2(10);
    s.push2(15);
    s.push1(11);
    s.push2(7);
    cout << "Popped element from stack1 is "
         << " : " << s.pop1()
         << endl;
    s.push2(40);
    cout << "\nPopped element from stack2 is "
         << ": " << s.pop2()
         << endl;
    return 0;
}

/* output   
Stack Overflow 7
Popped element from stack1 is  : 11
Stack Overflow 40

Popped element from stack2 is : 15 
*/