#include<iostream>
using namespace std;

//recursive function to print number 0 to n
void num(int n,int m){
    if(m==n)
    {cout<<m<<endl;return;}
    cout<<m<<endl;
    num(n,m+1);
}
//recursive function to print number n to 0
void num1(int n){
    if(n==0){
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    num1(n-1);
}
//To print even number using recursive function
void even(int n){
   if(n%2==0)
   {
    cout<<n<<endl;
    if(n==0){
        return;
    }
   }
   else
    return;
   even(n-2);
}
// To print 1 to N number using single argument 
void num2(int n){
    if(n==0){
        return;
    }
     cout<<n<<endl;
    num2(n-1);
   
}
//To Print 0 to N even number 
void even1(int n){
    if(n==0){
        cout<<n<<endl;
        return;
    }
    else
    even1(n-2);
    cout<<n<<endl;


}

int main(){
    // cout<<"Print N to 0 number "<<endl;
    // num1(8);
    // cout<<"Print 1 to N using two arguments"<<endl;
    // num(8,0);
    // cout<<"Print even number from N to 0"<<endl;
    // even(8);
    // cout<<"Print 0 to N number using single argument"<<endl;
    // num2(8);
    cout<<"Print even number from 0 to N"<<endl;
    int n,m;
    cout<<"Enter a number ";
    cin>>n;
    if(n%2==0)
    even1(n);
    else
        m=n--;
       even1(m);
}