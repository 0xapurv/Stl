//
// Created by Apurv Jha on 9/2/2020.
//

#ifndef STL_TEMPLATE_OWN_VECTOR_CLASS_H
#define STL_TEMPLATE_OWN_VECTOR_CLASS_H

#endif //STL_TEMPLATE_OWN_VECTOR_CLASS_H
//
// Created by Apurv Jha on 9/2/2020.
//

template<typename T>
class Vector{
    T cs;
    T ms;
    T *arr;

public:
    Vector(){
        cs = 0;//current size
        ms = 0;//maximum size
        arr = new T[ms];
    }
    void push_back(const T d){
        if(cs==ms){
            //Array is full
            T *oldArr = arr;
            arr = new T[2*ms];
            ms = 2*ms;
            for(T i=0;i<cs;i++){
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
    T front() const{
        return arr[0];
    }
    T back() const{
        return arr[cs-1];

    }
    bool empty() const{
        return cs==0;
    }
    int capacity() const{
        return ms;
    }
    T at(const T i){
        return arr[i];
    }
    int size(){
        return cs;
    }

    //Operator overloading
    T operator[](const int i){
        return arr[i];
    }
};
