#include<iostream>
using namespace std;

void rev_str(string &str,int start,int end){
    if(start>=end)
    return ;

    char c=str[start];
    str[start]=str[end];
    str[end]=c;

     rev_str(str,start+1,end-1);
}
int main(){
     string str="nmaa";
     rev_str(str,0,str.size()-1);
     cout<<str;
}