#include<iostream>
#include<map>

using namespace std; 

int main(){
    map <int,string> m;
    m[1]="Pruthviraj";
    m[2]="Vijaysinh";
    m[3]="Dodiya" ;
    m[4]="Hi";
    m[5]="Kemcho";
    m[6]="majama?";


    for(auto i:m){
    cout << i.second << " ";
}  
    auto it = m.find(2);
    m.erase(it);
    

    cout << endl;

    for(auto i:m){
    cout << i.first<< " ";
}  
    cout << endl;

    auto it2 = m.find(4);
    for(auto k=it2;k!=m.end();k++){
        cout << (*k).second << " "; 
    }
}

