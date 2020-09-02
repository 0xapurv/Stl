//
// Created by Apurv Jha on 9/2/2020.
//

#ifndef STL_OWN_VECTOR_CLASS_H
#define STL_OWN_VECTOR_CLASS_H

#endif //STL_OWN_VECTOR_CLASS_H

class Vector{
    int cs;
    int ms;
    int *arr;

public:
    Vector(){
        cs = 0;//current size
        ms = 0;//maximum size
        arr = new int[ms];
    }
    void push_back(const int d){
        if(cs==ms){
            //Array is full
            int *oldArr = arr;
            arr = new int[2*ms];
            ms = 2*ms;
            for(int i=0;i<cs;i++){
                arr[i] = oldArr[i];
            }
            //clear old memory
            delete [] oldArr;

        }
        arr[cs]=d;
        cs++;
    }
    void pop_back() {
        cs--;
    }
    int front() const{
        return arr[0];
    }
    int back() const{
        return arr[cs-1];

    }
    bool empty() const{
        return cs==0;
    }
    bool capacity() const{
        return ms;
    }
    int at(const int i){
        return arr[i];
    }
    int size(){
        return cs;
    }

    //Operator overloading
    int operator[](const int i){
        return arr[i];
    }
};
