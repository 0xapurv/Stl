#include <iostream>

using namespace  std;
template<typename T>  //templates = freedom from dataTypes
int search(T arr[],int n,T key){
    for (int p=0;p<n;p++){
        if(arr[p]==key){
            return p;
        }
    }
    return n;
}
int main() {
    int a[] = {1,2,3,4,10,12};
    int n1 = sizeof(a)/sizeof(int);
    int key1 = 10;
    cout<<search(a,n1,key1)<<endl;

    float b[] = {1.1,1.2,1.3};
    int n2 = sizeof(b)/sizeof(float);
    float key2 = 1.1;
    cout<<search(b,n2,key2);

    return 0;
}
