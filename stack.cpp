#include<iostream>
#include <iostream>
using namespace std;
#define max 1000;
class Stack{
    int size,top;

    public:
    int mystack[1000];
    bool iSfull ();
    Stack(){
        top=-1;
    }
    bool iSempty();
    int pop ();
    bool push( int item);
    void display();
    // ~Stack(){delete [] mystack}
};
bool Stack::push(int item){
    if(top>=1000-1){
        cout<<"stack overflow"<<endl;
        return false;
    }
    else{
        top++;
        mystack[top]=item;
        cout<<item<<"added"<<endl;
        return true;
    }
}
int Stack::pop(){
    if(top<0){
        cout<<"stack underflow"<<endl;
        return 0;
    }
    else{
       int  item=mystack[top];
       top--;
        cout<<item<<"popped"<<endl;
        return item;

        
    }
}
int main(){
    Stack s1;
    s1.push(2);
    s1.pop();
    s1.pop();
    return 0;
}
 






















// template <class T>
// #include<iostream>
// #include<conio.h>
// using namespace std;
// template <class T>
// class stack
// {
// int size, top;
// T *STACK;
// public:
// stack(int);
// bool full();
// bool empty();
// T pop();
// void push(const T &item);
// void display();
// ~stack() {delete [] STACK;}
// };
// template <class T>
// stack<T>::stack(int maxsize){
// size = maxsize;
// STACK = new T[size];
// top = -1;
// }
// template <class T>
// bool stack<T>::full()
// {
// if(top == size-1)
// return true;
// else
// return false;
// }
// template <class T>
// bool stack<T>::empty()
// {
// if(top == -1)
// return true;
// else
// return false;
// }
// template <class T>
// T stack<T>::pop()
// {
// T item;
// if(empty())
// {
// cout<<"Stack Underflow";
// }
// else
// {
// item = STACK[top];
// top--;
// return item;
// }
// }
// template <class T>
// void stack<T>::push(const T &item)
// {
// if(full())
// {
// cout<<"Stack overflow.";
// }
// else
// {
// top++;
// STACK[top] = item;
// }
// }
// template <class T>
// void stack<T>::display()
// {
// int i;
// for(i=top; i>=0; i--)
// {
// if(!empty() && i==top)
// cout<<"top -> "<<STACK[i]<<endl;
// else
// cout<<""<<STACK[i]<<endl;
// }
// }
// int main()
// {
// int n, size;
// int item;
// cout<<"Enter Stack Size:"<<endl;
//  cin>>size;

//  stack <int> s(10);
// //  while(1){
// cout<<"STACK OPERATIONS"<<endl;
//  cout<<"1. PUSH an ITEM"<<endl;
//  cout<<"2. POP an ITEM"<<endl;
//  cout<<"3. Exit"<<endl;
//  s.display();
// cout<<endl<<"Choose one option.[1-4]:";
//  cin>>n;
//  cout<<n<<endl;
// // switch (n) {
// //  case 1:
// //  cout<<endl<<"Enter an ITEM:";
// //  cin>>item;
// //  s.push(item);
// //  break;
// //  case 2:
// //  item = s.pop();
// //  if(!item)
// //  cout<<"Popped ITEM: "<<item;
// //  break;
// //  case 3:
// //  exit(0);
// //  default:
// //  cout<<"Enter correct option!";
// //  }
// if(n==1){
//     cout<<"Enter a new item"<<endl;
//     cin>>item;
//     s.push(item);
// }
// else if(n==2){
//      item = s.pop();
//  if(!item)
//  cout<<"Popped ITEM: "<<item;
// else{
//     cout<<"enter correct option"<<endl;
// }
// }
//  cout<<"Continue? Enter any key";
// //  }
// return 0;
// }
