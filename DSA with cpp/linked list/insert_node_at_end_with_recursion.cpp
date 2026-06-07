#include<iostream>
using namespace std;

class Node {
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
    Node *Head =NULL;

    int arr[4]={1,2,3,4};
    Head =Createlinkedlist(arr,0,4);

    //Print the linkded list
    Node *temp=Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    };

}