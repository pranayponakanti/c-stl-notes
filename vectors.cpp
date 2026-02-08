//topic 4
#include<bits/stdc++.h>
using namespace std;
//vectors are dynamic array ,stores elements in contigunous memory
//syntax vector<datatype> name;
void explainvector(){
    vector<int>v;//creates empty vector
    //add elements
    v.push_back(1);//{1} //adds at end
    v.emplace_back(2);//{1,2}
    //using pairs in vectors
    vector<pair<int,int>>vec ;
    v.emplace_back(1,2);//no need for curly braces when using emplace
    
    vector<int>v(5,100);//{100,100,100,100,100} creates 5 instances of 100
    vector<int>v(5);// create 5 instances of 0
    //access
    //using iterator
    vector<int>::iterator it =v.begin();// begin points to adress instead of values 
    it++;//changes to next memory location due to contigumous memory
    cout<<*(it)<<" ";// * is used to point the value at the given memoryy adress

    vector<int>::iterator it =v.end();//for a vector{10,20,30,40} end points to the memory loacation after 40 and not 40
    //acces just like arrays 
    cout<<v[0]<<v.at(0);// using index just like arrays
    // to print
    for(vector<int>::iterator it =v.begin();it !=v.end();it++){
        cout<<*(it)<<" ";
    }
    // using auto 
    for(auto it=v.begin();it != v.end();it++){
        //auto directly identifies the data type
        cout<<*(it)<< " ";
    }
    // for each loop
    for(auto it:v){
        cout<<it<<" ";
    }
    // deletion {10,20,30,40}
    v.erase(v.begin()+1);
    v.erase(v.begin()+2,v.begin()+4);//in range deletion
    //insert function
    vector<int>(2,100);//{100,100}
    v.insert(v.begin(),300);//{insert at begining}
    v.insert(v.begin()+1,2,10);//insert 10 at index 1 and 2

    vector<int>copy(2,50);//{50,50}
    v.insert(v.begin(),copy.begin(),copy.end());
    //size
    cout<<v.size();//2
    v.pop_back();//pop last element
    v.clear();// erase the entire vector
    






}
