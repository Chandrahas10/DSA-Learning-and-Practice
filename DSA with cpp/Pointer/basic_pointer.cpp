#include<iostream>
using namespace std;

int main(){
    int a=10;
    // print the address of a
    cout<<&a<<endl;
    int *ptr =&a;
    cout<<ptr<<endl;
    cout<<sizeof(ptr)<<endl;
    float m=2.6;
    float *ptr1=&m;
    cout<<ptr1<<endl;
    cout<<sizeof(ptr1)<<endl;

    int *p=&a;
    cout<<p<<endl;
    cout<<*p<<endl;
    int b=20;
    ptr=&b;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}
/*pointer ka size hamesha RAM ke size pr depend hota hai.
 agar RAM 4GB ka hai to pointer ki size 4byte hoga.*/

