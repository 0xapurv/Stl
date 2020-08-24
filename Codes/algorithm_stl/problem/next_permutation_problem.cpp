//
// Created by Apurv Jha on 8/24/2020.
//
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int c,n;
    cin>>c;
    for(int i=0;i<c;i++){
        cin>>n;
        int arr[n] = {};
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        next_permutation(arr,arr+n);
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";;
        }
        cout<<endl;
    }
}

