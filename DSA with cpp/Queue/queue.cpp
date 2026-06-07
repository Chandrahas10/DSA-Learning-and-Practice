#include<iostream>
using namespace std;

class Queue
{
    int *arr;
    int front,rear,size;

    public:
    //constructor
    Queue(int n)
    {
        arr=new int [n];
        size=n;
        front=rear=-1;
    }
    //If queue is empty
    bool IsEmpty() {
        return front ==-1;
    }
    //Queue is full or not 
    bool isFull() {
        return rear==size-1;
    }
    //Push
    void Push(int x){
        //Empty
        if(IsEmpty()){
            cout<<" Pushed "<<x<<" into the Queue \n";
            front =rear=0;
            arr[0]=x;
            return;
        }
        //Full
        else if(isFull()){
            cout<<" Queue Overflow \n";
            return ;
        }
        //Insert 
        else
        {
            rear=rear+1;
            arr[rear]=x;
             cout<<" Pushed "<<x<<" into the Queue \n";
        }
    }
    //Pop element ,starting 
    void pop(){
        //Empty
        if(IsEmpty()){
            cout<<"Queue Underflow \n";
            return ;
        }
        //Pop kar do
        else {
            if(front ==rear)
           {
             front =rear=-1;
             cout<<" Poped "<<arr[front]<<" into the Queue \n";
           }
            else{
                 cout<<" Poped "<<arr[front]<<" into the Queue \n";
                front =front +1;
            }
        }
    }
    //start 
    int start(){
        if(IsEmpty()){
            cout<<"Queue is empty!"<<endl;
            return -1;
        }
        else
        return arr[front];
    }
};
int main()
{
    Queue q(5);
     q.Push(0);
     
    q.Push(7);
   

    cout<<q.start();
}