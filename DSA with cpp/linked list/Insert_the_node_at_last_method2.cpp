#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
int main(){
    Node *Head,*Tail;
    Tail= Head= NULL;

    int arr[4]={1,2,3,4};

    //Insert the node at the last

    for(int i=0;i<4;i++){
        if(Head==NULL){
            Head=new Node(arr[i]);
            Tail =Head;
        }
        else{
            Tail->next=new Node(arr[i]);
            Tail=Tail->next;
        }
    }
      Node *temp=Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    };
}