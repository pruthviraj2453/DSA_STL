#include<iostream> 
#include<queue>

using namespace std;

void Printqueue(queue <string> q){
    while(!q.empty()){
        cout << q.front() << " " ;
        q.pop();
    }
}


int main(){
    queue <string> q;

    q.push("Dodiya");
    q.push("Vijaysinh");
    q.push("Pruthviraj");

    Printqueue(q);
    cout << endl;
    q.pop();
    Printqueue(q);

    cout << endl;

    cout << q.size() << endl;
    return 0;

}