#include<iostream>
#include<vector>

using namespace std;

vector <int> removeDuplicates(vector <int> arr){
    vector <int> ans;
    for(int i=0;i<arr.size();i++){
        if(arr[i+1]!=arr[i]){
            ans.push_back(arr[i]);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return ans;
}

int main(){
 //capacity shows the capacity which this vector can store - intially zero 
    //size shows number of elements in the vector 
    //capacity increases in 2^n;

    vector <int> v;
    vector <int> a(5,1) ;//will initalize of size 5 with all 5 elements as 1
    vector <int> copy(a); // will copy vector a in vector copy


    cout << "Inital capacity is :" <<v.capacity() << endl;

    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(4);
    cout << "Current capacity :"<<v.capacity() << endl;
    cout << "Number of elements " <<v.size() << endl;

    cout << "Element at 2nd index" << v.at(2) <<endl;
    cout << v.front() <<endl;
    cout << v.back() << endl;

    cout << endl;
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }

    cout << endl;
    v.erase(max_element(v.begin(),v.end()));
    v.erase(max_element(v.begin(),v.end()));


    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }

    return 0;

}