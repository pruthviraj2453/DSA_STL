#include<iostream>
#include<array>

using namespace std;

int main(){
    int arr[4] = {1,2,3,4};
    array <int,4> arr2 = {1,2,3,4};

    cout <<"Element at index 2 :" <<arr2.at(2) << endl;
    cout <<"Is empty or not :" << arr2.empty() << endl;
    cout <<"First element" <<arr2.front() << endl;
    cout <<"Last element" <<arr2.back() << endl;

    return 0;
}