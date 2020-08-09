#include <iostream>
#include<list>
using namespace  std;

// Template + Iterators + Comparators
template<class ForwardIterator, class T,class Compare>
ForwardIterator search(ForwardIterator start, ForwardIterator end,T key,Compare cmp){

    while(start!=end){
        if(cmp(*start,key)){
            return start;
        }
        start++;
    }
    return end;
}
class Book {



public:
    string name;
    int price;
    Book(string name,int price){
        this->name = name;
        this->price = price;
    }
};

class BookCompare {

public:
    bool operator()(Book A,Book B){              //functional object
        if(A.name ==B.name){
            return true;
        }
        else {
            return false;
        }
    }
};


int main() {

    Book b1("C++",100); //old edition
    Book b2("Python",120);
    Book b3("java",130);

    list<Book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);

    Book booktofind("C++",110); //new edition
    BookCompare cmp;            //functional object

    auto it =  search(l.begin(),l.end(),booktofind,cmp);
    if(it!= l.end()){
        cout<<"Book found in the library";
    }
    else {
        cout<<"Not found";
    }
}
