#include<iostream>
using namespace std;

class MaxHeap{
    int *arr;
    int size; // Total element in heap ctual element 
    int total_size; //total size of array

    public:
    MaxHeap(int n){
        arr=new int [n];
        size =0;
        total_size=n;

    }

    //insert into the heap

    void insert(int value){
        //if heap size is available or not
        if(size==total_size){
            cout<<"Heap is overflow \n";
            return ;
        }
        arr[size]=value;
        int index=size;
        size++;

        //Compare it with array
        while (index> 0 && arr[(index-1)/2]<arr[index])
        {
            swap(arr[index],arr[(index-1)/2]);
            index =(index-1)/2;

        };
        cout<<arr[index]<<"is inserted into the heap \n";
    }
    
     void print()
     {
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
            cout<<endl;
        }
     }

     void Heapify(int  index){
        int largest =index;
        int left=2*index+1;
        int right =2*index+2;
        // Largest will stored the index of element which is greater between parent,left chile and right chile
        if(left<size && arr[left]>arr[right])
        largest=left;
        if(right<size && arr[right]>arr[largest])
        largest =right;

        if(largest !=index){
            swap(arr[index],arr[largest]);
            Heapify(largest);
        }
     }

     void delete1(){
        if(size==0){
            cout<<"Heap is underflow \n";
            return ;
        }
        cout<<arr[0]<<"  deleted from the Heap \n";
        arr[0]=arr[size-1];
        size--;
        if(size==0){
            return ;
        }

        Heapify(0);
     };
};

int  main()
{
    MaxHeap H1(6);
    H1.insert(2);
    H1.insert(8);
    H1.insert(5);
    H1.print();
    H1.insert(34);
    H1.insert(32);
    H1.delete1();
     H1.print();
    H1.insert(78);
    H1.insert(23);
    H1.delete1();
     H1.delete1();
      H1.delete1();
       H1.delete1();
        H1.delete1();
         H1.delete1();
          H1.delete1();
    H1.print();
   

}