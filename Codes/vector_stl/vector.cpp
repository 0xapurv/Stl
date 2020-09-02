//
// Created by Apurv Jha on 9/2/2020.
//
//dynamic array
#include <iostream>
#include <vector>
using namespace std;

int main(){

    //You can create and initialise a vector
    vector<int> a;
    vector<int> b(5,10); //five int with value 10 - init a vector of zeros(n,0)
    vector<int> c(b.begin(),b.end());
    vector<int> d{1,2,3,10,14};

    //look at how we can iterate over the vector
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<",";
    }
    cout<<endl;

    for(auto it = b.begin();it!=b.end();it++){
        cout<<(*it)<<",";
    }
    cout<<endl;

    for(int x:d){
        cout<<x<<",";
    }
    cout<<endl;

    //Discuss more functions
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);//push back will first allocate double memory then writes the memory with the value
    }
    for(int x:v){
        cout<<x<<",";
    }

    //Understand t memory level, what are the difference in the two
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;//Size of underlying array
    cout<<v.max_size()<<endl;//maximum no of element a vector cn hold in the worst case according to availability memory in the system.

    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;//Size of underlying array
    cout<<d.max_size()<<endl;//maximum no of element a vector cn hold in the worst case according to availability memory in the system.
}

