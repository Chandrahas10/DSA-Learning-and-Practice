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

Node *Createlinkedlist(int arr[],int index,int size)
{
    //Base case
    if(index==size){
        return NULL;
    }

    Node *temp;
    temp=new Node(arr[index]);
    temp->next=Createlinkedlist(arr,index+1,size);
    return temp;
}


int main(){
    Node *Head;
    Head =NULL;
    int arr[]={2,4,6,8,10};

    Head=Createlinkedlist(arr,0,5);
    //Insert Node at particular position

    int x=3;//Insert position 
    int value=30;

    Node *temp=Head;
    x--;

    while(x-- && temp->next){
        temp=temp->next;
    };

    Node *temp2=new Node(value);
    temp2->next=temp->next;
    temp->next=temp2;

    //Print the linkded list
    Node *temp3=new Node(value);temp=Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    };

}