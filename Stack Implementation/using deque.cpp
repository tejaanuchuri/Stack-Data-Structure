#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    int n,x,i;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        d.push_front(x);
    }
    while(!d.empty()){
        int y = d.front();
        d.pop_front();
        cout<<y<<" ";
    }
    return 0;
}