#include<iostream>
using namespace std;
class Queue{
    int a[10];
    int rear;
    int front;
    public:
    Queue(){
        rear=front=-1;
    }
    void enqueue(int x);
    int dequeue();
    void display();
    ~Queue(){}
};
void Queue::enqueue(int x){
    if(front==-1){//first element
        front++;
        rear++;
        a[rear]=x;
        return;
    }
    if(rear==10-1){
        cout<<"queue is full"<<endl;
    }
    else{
        rear++;
        a[rear]=x;
    }
}
int Queue::dequeue(){
    int i ,item;

    if(rear==-1){
        cout<<"empty"<<endl;
        return 0;
    }
    //first approach shift all elements a step ahead
    //  else{
    //     item=a[front];
    //     for(i=0;i<rear;i++){
    //         a[i]=a[i+1];
    //     }
    // }
    else{
        item=a[front];
        front++;
        return item;
    }
}
void Queue::display(){
    int i;
    // cout<<front<<rear<<endl;
    if(front==-1||front>rear){
        cout<<"Nothing to display";
    }
    else{
        for(i=front;i<=rear;i++){
            cout<<a[i]<<endl;
        }
    }

}

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(10);
    q.dequeue();
    
   
    q.display();
    return 0;
}