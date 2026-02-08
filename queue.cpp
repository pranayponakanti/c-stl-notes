#include<bits/stdc++.h>
using namespace std;
void explainqueue(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.emplace(4);
    //the queue is {1,2,4}
    // it follows fifo first in first out
    q.back() += 5;
    cout<<q.back(); //prints 4
    cout<<q.front();// prints 1
    q.pop(); // removes first element {2,4}
// size and swap same as stack
}