//
// Created by Apurv Jha on 8/31/2020.
//
#include <iostream>
#include <string>
using namespace std;

int main() {

    //String init
    string s0;
    string s1("Hello");

    string s2 = "Hello World";
    string s3(s2);
    string s4 = s3;

    char a[] = {'a', 'b', 'c', '\0'};
    string s5(a);

    cout << s0 << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;

    if (s0.empty()) {
        cout << "s0 is an empty string" << endl;
    }

    //Append
    s0.append("I love C++ ");
    cout << s0 << endl;
    s0 += "and Python";
    cout << s0 << endl;

    //Remove
    cout << s0.length() << endl;
    s0.clear();
    cout << s0.length() << endl;

    //Compare
    s0 = "Apple";
    s1 = "Mango";
    cout << s1.compare(s0); //Return an integer ==0 equal, >0 or <0

    // Overloaded Operator operators
    if (s1 > s0) {
        cout << "Mango is lexicographically greater than Apple" << endl;
    }

    cout << s1[0] << endl;

    //Find Substring
    string s = "I want to have a apple juice";
    int idx = s.find("apple");
    cout << idx << endl;

    //Remove a word from the string
    string word = "apple";
    int len = word.length();
    cout << s << endl;
    s.erase(idx, len + 1);
    cout << s << endl;

    //Iterators over all the characters in the string
    for (int i = 0; i < s1.length(); i++) {
        cout << s1[i] << ":";
    }

    //Iterators
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << (*it) << ",";
    }

    //For each Loop
    for (char c:s1) {
        cout << c << ".";
    }
    return 0;


}

