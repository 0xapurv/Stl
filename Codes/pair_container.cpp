//
// Created by Apurv Jha on 8/23/2020.
//
#include <iostream>
using namespace std;

int main(){

    //Pair
    pair<int,char> p;
    p.first = 10;
    p.second = 'B';

    //Another way
    pair<int,char> p2(p);
    cout<<p2.first<<endl;
    cout<<p2.second<<endl;

    // make pair
    pair<int,string> p3 = make_pair(100,"Audi");
    cout<<p3.first<<" "<< p3.second<<endl;

    pair<pair<int,int>,string> car;
    car.second = "Audi";
    car.first.first = 10;
    car.first.second = 20;
    cout<<car.first.first<<endl;
    cout<<car.second<<endl;

}

