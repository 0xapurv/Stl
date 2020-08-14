#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr[] = {20,30,40,40,40,50,100,1100};
    int n= sizeof(arr)/sizeof(int);

    //Search in a sorted array
    int key;
//    cin>>key;
//
//    bool present = binary_search(arr,arr+n,key);
//    if(present){
//        cout<<"Present";
//
//    }
//    else {
//        cout<<"not present";
//    }

    //Two more things
    // Get the index of the element

    // lower_bound(s,e,key)
    auto lb = lower_bound(arr,arr+n,40);
    cout<<(lb-arr)<<endl;

    //upper_bound(s,e,key)
    auto up = upper_bound(arr,arr+n,40);
    cout<<(up-arr)<<endl;

    cout<<"Occ frequency of 40 is "<<(up-lb)<<endl;

    return 0;
}



