#include<iostream>
using namespace std;

int pow(int num,int n){
    
    if(n==1)
    return num;

    return num*pow(num,n-1);
}
int main(){
    int n,num;
    num=2;
    cout<<"Ente a power of 2"<<endl;
    cin>>n;
    cout<<pow(num,n);

}