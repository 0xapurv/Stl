//
// Created by Apurv Jha on 8/23/2020.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);

    //rotate
    rotate(arr,arr+2,arr+n);
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Apply the same on vector
    vector<int> v{10,20,30,40,50};
    for (int i = 0; i < v.size(); ++i) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // Next Permutation
    next_permutation(v.begin(),v.end());
    for(int x:v){
        cout<<x<<" ";
    }

    return 0;
}