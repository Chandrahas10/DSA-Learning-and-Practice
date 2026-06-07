#include<iostream>
using namespace std;

void fun(int *p)
{
    *p =*p+10;
}
void run(int **p1){
    p1++;
}
int main(){
    int n=10;
    int *p=&n;//single pointer
    int **p1=&p; //double pointer
    int ***p3=&p1; //triple pointer 
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<p1<<endl;
    cout<<&p1<<endl;
    cout<<p3<<endl;
    //Value ko modify karna ho jo n mein rakha hai...
    
    *p=*p+5;
    cout<<n<<endl;
    **p1=**p1+5;
    cout<<n<<endl;
    ***p3=***p3+5;
    cout<<n<<endl; 
    fun(p);
    cout<<n<<endl;

    cout<<p<<endl;
    run(p1);
    cout<<p1<<endl;
}