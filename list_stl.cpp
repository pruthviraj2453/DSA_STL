#include<iostream> 
#include<list>

using namespace std;

//list does not support random access of elements according to index 

int main(){
    list <int> l;
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(1);

    for(int i:l){
        cout << i << " " ;
    }

    l.erase(l.begin());
    cout << endl;

    for(int i:l){
        cout << i << " " ;
    }


    list <int> n(6,10);
    cout << endl;

     for(int i:n){
        cout << i << " " ;
    }




}