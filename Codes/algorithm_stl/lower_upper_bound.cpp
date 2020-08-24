#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr[] = {20,30,40,40,40,50,100,1100};
    int n= sizeof(arr)/sizeof(int);

   // Two more things
   // Get the index of the element

   // lower_bound(s,e,key)
    auto lb = lower_bound(arr,arr+n,40);
    cout<<(lb-arr)<<endl;

    //upper_bound(s,e,key)
    auto up = upper_bound(arr,arr+n,40);
    cout<<(up-arr)<<endl;

    //Occ. frequency
    cout<<"Occ frequency of 40 is "<<(up-lb)<<endl;

    return 0;
}



