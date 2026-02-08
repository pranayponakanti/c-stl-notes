#include<bits/stdc++.h>
using namespace std;
// pair is a part of utility library ,it is used to store two values together ,it could be two differnt data types
//syntax pair<dt1,dt2>variablename ={values1,values2};
void explainpair(){
    pair<int,int>p ={1,4};//intalize p as pair and store pair of values in p
    cout<< p.first<<""<<p.second;//to access elements
    //nested pair 
    pair<int,pair<int,int>>q ={1,{2,3}};
    cout<<q.first<<" "<<q.second.first<<q.second.second;
    // prints 1 2 and 3
    pair<int ,int>arr[] ={{1,2},{2,3},{5,1}};//each pair is given a index from 0
    cout<<arr[1].second;//prints 5
}