#include<iostream>
#include<queue>


using namespace std; 

void PrintmaxHeap(priority_queue <int> maxi){
    while(!maxi.empty()){
        cout << maxi.top() << " " ;
        maxi.pop(); 
    }
}

void PrintminHeap(priority_queue <int , vector <int> , greater <int> > maxi){
    while(!maxi.empty()){
        cout << maxi.top() << " " ;
        maxi.pop();
    }
}


int main(){
    priority_queue <int> maxi; // max heap type
    priority_queue <int , vector <int> , greater <int> > mini;

    maxi.push(1);
    maxi.push(65);
    maxi.push(6);
    maxi.push(13);
    maxi.push(45);
    maxi.pop(); // will pop the greatest element

    mini.push(1);
    mini.push(42);
    mini.push(11);
    mini.push(2);

  
    PrintmaxHeap(maxi); // will print elements orderwise accordingly 
    cout << endl ;
    PrintminHeap(mini);
    cout << endl;

    return 0;

}
