#include<iostream>
using namespace std;

class Node 
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data=value;
        next=NULL;
    }
};

class Queue 
{
    Node *rear;
    Node *front;

    public:

    Queue()
    {
        front =rear=NULL;
    }
    //Queue is empty or not
    bool IsEmpty()
    {
        return front == NULL;
    }
    //Push element into the queue
    void push()
{
    if(IsEmpty())
{
    front =
}}};