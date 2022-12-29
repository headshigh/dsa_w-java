#include<iostream>
using namespace std;
class circularQueue{
    int front,rear,size;
    int arr[10];
    public:
    circularQueue(int size_val){
        front=rear=-1;
        
        
        
    }
    void enqueue(int item);
    int dequeue();
    void display();
};
void circularQueue::enqueue(int item){
    if((front == 0 && rear == (size-1)) ||(front==rear+1) ){
        cout<<"The queue is full"<<endl;
    }
    
    else if(front==-1){//first element
        front=0;
        rear=0;
        arr[rear]=item;
    }

    else{
        rear=(rear+1)%5;
        arr[rear]=item;
    }
    
}
int circularQueue::dequeue(){
    int element;
    if(front==-1 && rear==-1){
        cout<<"queue empty"<<endl;}
        
    // }else if(front=rear){
    //     front=rear=-1;
    //     element=arr[front];
    // }
    else{
        element=arr[front];
            front=(front+1)%5;//size
        
        
    }
    return element;
}
void circularQueue::display(){
    int i=front;
    cout<<front<<","<<rear<<endl;
    if(front==-1 && rear==-1){
        cout<<"queue empty cha"<<endl;
       
    }
    else{
    while(i<=rear){
        cout<<arr[i]<<endl;
        i=(i+1)%5;
    }}
}

int main()
{
    circularQueue q(5);
    
    q.enqueue(5);
    q.enqueue(25);
    q.enqueue(25);
    q.enqueue(2);
    q.enqueue(2);
    q.dequeue();
    q.display();
    
    return 0;
}