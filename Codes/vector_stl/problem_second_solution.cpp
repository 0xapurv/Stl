//
// Created by Apurv Jha on 9/2/2020.
//
//Second Solution with car name
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Car{
public:
    string car_name;
    int x,y;
    Car(){}
    Car(string n,int x,int y){
        this->car_name = n;
        this->x=x;
        this->y=y;
    }
    int dist(){
        //return square of distance from origin
        return x*x + y*y;
    }
};

bool compare(Car A,Car B){
    int da= A.dist();
    int db = B.dist();

    if(da==db){
        return A.car_name.length() < B.car_name.length();
    }
    return da < db;
}
int main(){
    int n;
    cin>>n;
    vector <Car> v;

    for(int i=0;i<n;i++){
        int x,y;
        string name;
        cin>>name>>x>>y;
        Car temp(name,x,y);
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),compare);

    for(auto c:v){
        cout<<"Car"<<c.car_name<<" Distance "<<c.dist()<<" Location "<<c.x<<c.y<<endl;
    }

    return 0;
}

/*
 * test input
 * 4
 *Audi 1 2
 *Lemo 2 2
 *Lambo 1 0
 *Maruti 0 1
 */



