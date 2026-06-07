#include<iostream>
using namespace std;

int main(){
    char name[5]="1234";
     char *ptr=name;
     cout<<static_cast<void*>(ptr)<<endl;
     cout<<(void*)ptr<<endl;

     char arr='a';
     char *ptr1=&arr;
     cout<<(void*)&arr<<endl;
     cout<<(void*)ptr1<<endl;


     }