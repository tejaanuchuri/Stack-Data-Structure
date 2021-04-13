#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    int n,x,i;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        s.push(x);
    }
    while(!s.empty()){
        int y = s.top();
        s.pop();
        cout<<y<<" ";
    }
    return 0;
}