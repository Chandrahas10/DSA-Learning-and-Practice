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
class Stack
{
    Node *top;
    int size; //actual size of stack

    public:

    Stack(){
        top=NULL;
        size=0;
    }

    //push
    void push(int value){
        Node *temp=new Node(value);
        if(temp==NULL){
            cout<<"Stack Overflow \n";
            return ;
        }
        else{
            temp->next=top;
            top=temp;
            size++;
            cout<<"Pushed "<<value<<" in stack \n";
        }
    }

    //Pop
    void pop(){
        if(top==NULL){
            cout<<"stack underflow \n";
            return ;
        }
        else {
            Node *temp=top;
            cout<<"Popped "<<top->data<<" from the stack\n";
            top=top->next;
            delete temp;
            size--;
        }
    }
    //peek
    int peek()
{
    if(top==NULL){
        cout<<"Stack is empty\n";
        return -1;
    }
    else {
        return top->data;
    }
}   
    //Isempty
    bool isempty(){
        return top==NULL;
    }
    //IsSize
    int Issize(){
        return size;
    }
};

int main(){
    Stack s;
    s.push(6);
    s.push(8);
    s.push(1);
    cout<<s.peek()<<endl;
    cout<<s.Issize()<<endl;
    cout<<s.isempty()<<endl;

}