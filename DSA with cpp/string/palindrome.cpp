#include<iostream>
using namespace std;

bool checkpalindrome(string str,int start,int end)
{ //base condition
    if(start>=end)
    return 1;
    //not matched
    if(str[start]!=str[end])
        return 0;
    
     //matched
    else
    return  checkpalindrome(str,start+1,end-1);
    
}
int main(){
    string str= "nommon";
    cout<<checkpalindrome(str,0,str.size()-1
    )<<endl;
}