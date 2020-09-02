//
// Created by Apurv Jha on 9/2/2020.
//
#include <iostream>
#include "own_vector_class.h"
using namespace std;

int main(){
    Vector v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.pop_back();
    v.push_back(5);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<"Capacity "<<v.capacity()<<endl;

    return 0;

}

