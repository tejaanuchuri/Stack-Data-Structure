#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        q.push(x);
        int s = q.size();
        for(int i=0;i<s;i++){
            q.push(q.front());
        }
    }
    /* remove element */
    x = q.front();
    cout<<x<<"is removed form queue"<<endl;
    return 0;
}