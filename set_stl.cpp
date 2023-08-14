#include<iostream>
#include<set>

using namespace std;
//set does not include repetative elements 

int main(){
    set <int> s;
    s.insert(1);
    s.insert(4);
    s.insert(4);
    s.insert(3);
    s.insert(11);
    s.insert(11);
    s.insert(5);

    for(auto i:s){
        cout << i << endl;
    }
    cout << endl; 

    set <int> :: iterator it = s.begin();
    it++;  // will remove second element
    s.erase(it);
 
    for(auto i:s){
        cout << i << endl;
    }
    cout << endl;

    cout << "-5 is present or not :" << s.count(-5) << endl;

    set <int> :: iterator it2 = s.find(4);

    for(auto itr = it2;itr!=s.end();itr++){
        cout << *itr << " "; 
    }
    cout << endl;

    return 0;


}


 
