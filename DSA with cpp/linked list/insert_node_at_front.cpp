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
int main()
{

    Node *Head;
    Head=NULL;

    int arr[]={2,3,5,2,6};

    //Insert the Node at beginning of the

    //Linked list doesnt exist
    for(int i=0;i<5;i++){

   
    if(Head==NULL) 
    {
        Head=new Node(arr[i]);
    }
    //Linked List exit karti hai
    else 
    {
        Node *temp;
        temp=new Node(arr[i]);
        temp->next =Head;
        Head =temp;
    } }

    //Print the value of the
    Node *temp=Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    };

}