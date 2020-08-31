 //
// Created by Apurv Jha on 8/31/2020.
//
#include <iostream>
#include <cstring>
using namespace std;

// char *strtok(char *s, char *delimiter)
// return a token on each subsequent call
// on the fist call function should be passed wih string argument for 's'
// on subsequent calls we should pass the string argument as NULL
// strtok
int main(){
    char s[100] = "Today is a rainy day";

    char *ptr = strtok(s," ");
    cout<<ptr<<endl;

    while(ptr!=NULL){
        ptr = strtok(NULL," ");
        cout<<ptr<<endl;
    }

    return 0;
}

