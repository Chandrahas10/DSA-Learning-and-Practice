#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
};

int main(){
    Node *Head;
    Head =NULL;
    int arr[4]={0,1,2,3};
    //Insert the node at the last of element
    for(int i=0; i<4; i++){
        if(Head==NULL){
            Head=new Node(arr[i]);
        }
        else{
            Node *tail=Head;
            while(tail->next!=NULL)
            {
                tail=tail->next;
            }
            tail->next=new Node(arr[i]);
        }
    }

        Node *temp=Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    };

}