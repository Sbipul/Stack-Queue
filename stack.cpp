// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

#define MAX_LENGTH 5
struct Stack{
    int top;
    int data[MAX_LENGTH];
};

void push(Stack *s,int item){
    if(s->top<MAX_LENGTH){
        s->data[s->top++] = item;
    }else{
        cout<<"Stack is fulled"<<endl;
    }
}

int pop(Stack *s){
    int item;
    if(s->top==0){
        cout<<"Stack is empty"<<endl;
        return -1;
    }else{
       item = s->data[s->top--];
    }
    return item;
}

int main() {
    int item;
    Stack myStack;
    myStack.top = 0;
    push(&myStack,5);
    push(&myStack,7);
    
    item = pop(&myStack);
    
    for(int i=0;i<myStack.top;i++){
        cout<<myStack.data[i]<<endl;
    }
    return 0;
}


