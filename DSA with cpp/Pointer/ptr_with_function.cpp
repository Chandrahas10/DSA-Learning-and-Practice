#include<iostream>
using namespace std;
void swap(int *p1,int *p2){
    int temp=*p1;
    *p1 = *p2;
    *p2=temp;
}

void dob(int *p){
  for(int i=0;i<5;i++){
      p[i]=p[i]*2;
  }

}
int main(){
    int first=10,sec=20;
     cout<<first<<sec<<endl;
    swap(&first,&sec);
    cout<<first<<sec<<endl;

    int arr[5]={1,2,3,4,5};
    dob(arr);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}