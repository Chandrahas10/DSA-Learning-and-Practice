#include<iostream>
using namespace std;

int minele(int arr[],int index,int n){
    if(index==n-1){
        return arr[index];
    }

    return min(arr[index],minele(arr,index+1,n));
}
int main(){
   int  arr[5]={30,22,44,15,6};
    cout<<minele(arr,0,5);
}