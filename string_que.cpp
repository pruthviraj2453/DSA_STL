#include<iostream>
#include<string>
#include<vector>

using namespace std;

void Print(vector <int> v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

vector <int> binaryShopping(vector<int> S, int P)
{ 
    int count =1;
    for(int i=S.size()-1;i>=0;i--){
        if(count<=2){
            if(S[i]==1){
                S[i]=0;
                count++;
            }
        }
    }
    return S;
}

using namespace std;

int main(){
    vector <int> v ;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);

    Print(v);
    v= binaryShopping(v,15);

    Print(v);
    return 0;

   

}