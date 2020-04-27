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

int main()
{
    struct stack st;
    cout<<"Enter Size of stack:";
    cin>>st.size;
    st.s=new int[st.size];
    st.top=-1;
    
    return 0;
}
