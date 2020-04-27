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


int main()
{
    struct stack st;
    cout<<"Enter Size of stack:";
    cin>>st.size;
    st.s=new int[st.size];
    
    
    return 0;
}
