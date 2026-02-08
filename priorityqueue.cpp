#include<bits/stdc++.h>
using namespace std;
void explainpq(){
    priority_queue<int>pq;
    // always the largest element stays at the top
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    //{10,8,5,2}
    cout<<pq.top();//10
    pq.pop();//removes 10
    //min heap
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    //{2,5,8,10}
    cout<<pq.top();//prints 2
}