#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int arr[] = {20,30,40,50,100,1100};
    int n= sizeof(arr)/sizeof(int);

    //Search in a sorted array
    // complexity is OLogN

    int key;
    cin>>key;

    bool present = binary_search(arr,arr+n,key);
    if(present){
        cout<<"Present";

    }
    else {
        cout<<"not present";
    }

    return 0;
}



