//
//  main.cpp
//  StackUsingArray
//
//  Created by Gorakh Chavan on 27/04/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    int *s;
};
void create(stack *st)
{
  cout<<"Enter Size of stack:";
    cin>>st->size;
    st->s=new int[st->size];
    st->top=-1;
}
void display(struct stack st)
{
    for(int i=st.top;i>=0;i--)
    {
        cout<<st.s[i]<<endl;
    }
}
void push(stack *st,int x)
{
    if(st->top==st->size-1)
        cout<<"Stack Overflow";
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
}
int pop(stack *st)
{
    int x=-1;
    if(st->top==-1)
        cout<<"Stack Underflow";
    else
    {
        x=st->s[st->top];
        st->top--;
    }
    return x;
}
int peak(struct stack st,int pos)
{
    int x=-1;
    if(st.top-pos+1)
        cout<<"invalid position";
    else{
        x=st.s[st.top-pos+1];
    }
    return x;
}
int stackTop(struct stack st)
{
    if(st.top==-1)return -1;
    else return st.s[st.top];
}
int isEmpty(struct stack st)
{
    if(st.top==-1)return 1;
    else return 0;
}
int isFull(struct stack st)
{
    if(st.top==st.size-1)return 1;
    else return 0;
}

int main()
{
    struct stack st;
    create(&st);
    push(&st, 10);
    push(&st, 18);
    push(&st, 20);
    pop(&st);
    display(st);
    
    
    return 0;
}
