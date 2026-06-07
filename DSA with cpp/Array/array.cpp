#include<iostream>
using namespace std;

//1) WAP to enter the five elements in array and show it 
void arrShow(){
      int arr[5], sum = 0; 
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }  
     for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}
/*2) ) WAP to enter the five elements in array and calculate the sum of all elements 

10 20 30 40 50

Output : Sum of all array elements : 150  */
int  sumArray() {
    int arr[5], sum = 0; 
    cout<<"Enter the 5 number"<<endl;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    return sum;
}
/*3)  WAP to enter the five elements in array and find out the maximum value 
5 9 11 4 6
output : Maximum element in array : 11 */
void maxValue(){
     int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<4;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"max value is \n"<<max;
/* 4) WAP to enter the five elements in array and find out the minimum value 
ex : 5 9 11 4 6
output : Minimum element in array : 4 */
    int min=arr[0];
    for(int i=0;i<4;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"min value is "<<min;
    
}
//5)WAP to find the all Even elements Form Array 
void findEven_array(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        if(arr[i]%2==0)
        cout<<"Even elements are"<<arr[i]<<endl;
    }
}
/*6) WAP to enter the five element and display in ascending order 
ex :5 3 6 4 1
output : 1 3 4 5 6 */
void arrAsec(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
         if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
         }
        }    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}
/*7) WAP to enter the five element and display in decending order 
	11,22,3,99,10
	output: 99,22,11,10,3*/
void arrDesc(){
     int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
         if(arr[j]<arr[j+1]){
            swap(arr[j],arr[j+1]);
         }
        }    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}
/*8) WAP to Reverse a Given Array 
	Ex : 1,2 3,4 5
	Output : 5,4,3,2,1*/
void Reverse(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
   int  first=0,last=4,mid;
   while(first<last){
    swap(arr[first],arr[last]);
    first++,last--;
   }
   for(int i=0;i<5;i++){
    cout<<arr[i]<<endl;
   }
}
/*9) . Write a program in C to merge two arrays of same size sorted in decending order.*/
void merge(){
     int arr1[2],arr2[2];
    for(int i=0;i<2;i++){
        cin>>arr1[i];
    }
     for(int i=0;i<2;i++){
        cin>>arr2[i];
    }
   int arr3[4],j=0;
   for(int i=0;i<4;i++){
    arr3[i]=arr1[j];
    i++;
    arr3[i]=arr2[j];
    j++;
   }
    
    cout<<"After mearging array"<<endl;
    for(int i=0;i<4;i++){
        cout<<arr3[i]<<endl;
    }
int t;
 for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
         if(arr3[j]>arr3[j+1]){
            swap(arr3[j],arr3[j+1]);
         }
        }    }
cout<<"after sorting"<<endl;
    for(int i=0;i<4;i++){
        cout<<arr3[i]<<endl;
    }
}
/*10) WAP to find the all Prime Elements From Array .*/
void findPrime(){
     int arr1[2] 
     ;
    for(int i=0;i<2;i++){
        cin>>arr1[i];
    }
}
int main(){
   
    // cout<<"Enter the 5 element"<<endl;
//   arrShow();

//   int sum=sumArray();
//   cout<<sum;

// maxValue();

// findEven_array();

// arrAsec();

// arrDesc();

// Reverse();

merge();
}

