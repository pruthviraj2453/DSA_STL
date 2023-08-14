#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(2);
    v.push_back(6);
    v.push_back(10);

    for(int i:v){
        cout << i << " ";
    }
    cout << endl;

    rotate(v.begin(),v.end()-2,v.end()); //used to rotate from particular posisition 

    //reverse(v.begin(),v.end());   // used to reverse a particular vector or string 
    cout << "After rotation " << endl;
    
    for(int i:v){
        cout << i << " ";
    }

   /* string s ;
    cout << "Enter your string here :";
    getline(cin,s);
    reverse(s.begin(),s.end());
    cout << s << endl;
    return 0; */

    sort(v.begin(),v.end());

    cout << endl;
    
    for(int i:v){
        cout << i << " "; 
    }


}