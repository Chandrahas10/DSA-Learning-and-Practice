#include<iostream>
using namespace std;

void fun3(int n){
    if(n==0)
    {cout<<"Happy Birthday"<<endl;
    return ;
    }

    cout<<n<<"days left for birtday"<<endl;
    fun3(n-1);
}
int main(){
    int m;cout<<"Enter the number of days"<<endl;
    cin >>m;
    fun3(m);
}