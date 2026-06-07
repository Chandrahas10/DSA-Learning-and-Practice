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

Node *Createlinkedlist(int arr[],int index,int size,Node *prev)
{
    //Base case
    if(index==size)
        return prev;
    
    Node *temp;
    temp=new Node(arr[index]);
    temp->next=prev;
    return Createlinkedlist(arr,index+1,size,temp);
}

int main(){
    Node *Head;
    Head =NULL;
    int arr[5]={2,4,6,8,10};

    Head=Createlinkedlist(arr,0,5,Head);
    //Print the linkded list
    Node *temp=Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    };

}