#include<iostream>
using namespace std;
//Print array
void print(int arr[],int n ,int index){

    if(index==n){
        return;
    }
    
    cout<<arr[index]<<" ";
    print(arr,n,index+1);
}
//Print array with one element ahead 
void print1(int arr[],int n ,int index){

    if(index==n){
        return;
    }
    print(arr,n,index+1);
     cout<<arr[index]<<" ";
}
//Print array in reverse
void print_rev(int arr[],int index ,int n){

    if(index==n)
        return;
    print_rev(arr,index+1,n);
    cout<<arr[index]<<" ";
}
//print array with two parameter
void Print2(int arr[],int index){
    if(index==-1)
    return;
    Print2(arr,index-1);
    cout<<arr[index]<<" ";
}
int main(){
    int arr[5]={1,23,4,5,6};
    print(arr,5,0);cout<<endl;
    print_rev(arr,0,5);cout<<endl;
    print1(arr,5,0);cout<<endl;
    Print2(arr,4);

}