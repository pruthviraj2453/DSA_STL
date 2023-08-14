#include<iostream>
#include<deque>

using namespace std;

void Prnt(deque <int> q){
    for(int i=0;i<q.size();i++){
        cout << q[i] << " " ;
    }
}

int main(){

   deque <int> q;
   deque <int> q2(5,1);

   Prnt(q2);
   cout << endl;
   q.push_back(2);
   q.push_front(1);
   q.push_back(3);
   q.push_back(5);

   Prnt(q);
   cout << endl;

   cout << q.front() << endl;
   cout << q.back()<< endl;

   q.erase(q.begin());
   //q.erase(q.end()-2,q.end());

   Prnt(q);




}
