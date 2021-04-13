#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int main(){
    priority_queue<pair<int,int> > q; 
    pair<int,int> p;
    int n,x,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        q.push(make_pair(++cnt,x));
    }
    /* remove element */
    while(!q.empty()){
        p = q.top();
        q.pop();
        cout<<(p.second)<<"is removed form stack"<<endl;
    }
    return 0;
}