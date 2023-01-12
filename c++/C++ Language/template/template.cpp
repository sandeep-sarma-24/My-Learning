#include<iostream>
using namespace std;

template<class T>
class Stack {
private:
    T *stk;
    int top;
    int size;

public:
    Stack(int sz)
    {
        size = sz;
        top = -1;
        stk = new T[size];

    }
    void push(T x);
    int pop();
};

template<class T>
void Stack<T>::push(T x){
    if(top == size -1)
        cout << "Stack is full";
    else{
        top++;
        stk[top]= x;

    }
}


int main(){
    Stack<int> s(10);
    s.push(19);
    s.push(19);
    s.push(19);
    s.push(19);
    
}