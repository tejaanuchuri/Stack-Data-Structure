#include<iostream>
#include<malloc.h>
using namespace std;
class structnode{
    public:
    int data;
    structnode* next;
};
structnode* newnode(int data){
    structnode* node = (structnode*)malloc(sizeof(structnode));
    node->data = data;
    node->next = NULL;
    return node;
}
structnode* push(structnode* head,int data){
    structnode* node = newnode(data);
    node->next = head;
    return node;
}
bool isempty(structnode* head){
    return !head;
}
int peek(structnode* head){
    if(isempty(head))
        return -1;
    return head->data;
}
structnode* pop(structnode* head){
    if(isempty(head)){
        cout<<"stack underflow"<<endl;
        return head;
    }
    structnode* temp = head;
    cout<<temp->data<<" is pop form the stack"<<endl;
    head = head->next;
    free(temp);
    return head;
}
int main(){
    structnode* head = NULL;
    int n,data;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        head = push(head,data);
    }
    
    cout<<peek(head)<<" PEEK"<<endl;
    cout<<"is empty "<<isempty(head)<<endl;
    
    while(!isempty(head)){
        int temp = peek(head);
        head = pop(head);
    }cout<<endl;
    return 0;
}