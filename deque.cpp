//topic 6
#include<bits/stdc++.h>
using namespace std;
void explaindeque(){
    deque<int>dq;
    dq.push_back(1);//{1}
    dq.emplace_back(2);//{1,2}
    dq.emplace_front(3);//{3,1,2}
    dq.push_front(4);//{4,3,1,2}
    dq.back();
    dq.front();
    // rest functions are same as vector
}