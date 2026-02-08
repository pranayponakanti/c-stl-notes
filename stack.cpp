//topic 7
#include<bits/stdc++.h>
using namespace std;
void explainstack(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);
// the stack is {5,3,3,2,1} stack follows lifo(last in first out)
cout<<st.top();//return top element ,5
st.pop();//removes top element
st.size();//returns size 
cout<<st.empty(); // checks stack is empty or not
// all the operations are o(1) for stack 
}
