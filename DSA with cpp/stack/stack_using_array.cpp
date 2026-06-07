#include<iostream>
using namespace std;

//Implement it with array
class Stack{
    int *arr;
    int size;
    int top;

    //Constructor
    public:
     Stack(int s){
        size=s;
        top=-1;
        arr=new int[s];
     }
    
    //Push
    void push(int value)
    {
        if(top==size-1){
            cout<<"stack is overflow \n";
            return ;
        }
        else{
            top++;
            arr[top]=value;
            cout<<"Pushed "<<value<<" into the stack\n";
        }
    }

    //Pop
    void Pop(){
        if(top==-1)
        {
            cout<<"Stack is Underflow";
            return ;
        }
        else{
            cout<<"Poped "<<arr[top]<<" into the stack\n";
            top--;
        }
    }

    //Peek
   int  Peek(){
    if(top==-1){ 
        cout<<"Stack is empty\n";
        return -1;
    }
    else{
        return arr[top];
    }
   }

    //Empty
    void isempty(){
        if(top==-1)
        cout<<"Stack is Empty";
       
    }

    //IsSize
    int isSize(){
        cout<<top+1;
    }
};
int main(){
    Stack s(5);
  
    cout<<s.isSize()<<endl;
    
    cout<<s.Peek()<<endl;
   

}