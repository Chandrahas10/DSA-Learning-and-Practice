    
    //Push
    void push(int value){
        if(top==-1){
            cout<<"stack is overflow";
            return ;
        }
        else{
            top++;arr[top]=value;
            cout<<"Pushed "<<value<<"into the stack\n";
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
            cout<<"Poped "<<arr[top]<<"into the stack\n";
            top--;
        }
    }
    //Peek
   int  Peek(){
    if(top==-1){
        cout<<"Stack is empty\n";
        return 1;
    }
    else{
        return arr[top];
    }
   }
    //Empty
    void isempty(){
        if(top==-1)
        cout<<"Stack is Empty";
        else
        cout<<"Stack is full";
    }