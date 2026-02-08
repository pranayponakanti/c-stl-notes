#include<bits/stdc++.h>//topic 2
using namespace std;
void print(){//void returns noting 
    cout<<"pranay";
}
int sum(int a,int b){//its a return type function ,we can use long bool double etc..
    return a+b;
}
int main(){
    print();//runs function print 
    int s =sum(5,7);
    //prints 6 as per the function sum
    cout<<s;
    return 0;// we include this because the return type is int
}
