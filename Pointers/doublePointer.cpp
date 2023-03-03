#include<iostream>
using namespace std;

void update(int **p2){
    p2 = p2+1;

    *p2 = *p2 +1;

    **p2 =  **p2 +1;
}

int main(){

    int i =5;
    int*p = &i;
    int **p2 = &p;

    cout<<endl<<endl<<" Chala hawa yeun dyaa"<<endl;
    // cout<<endl<<"Printing p : "<< p<<endl;
    // cout<<endl<<"Address of p"<< &p<<endl;

    // cout<<i <<endl;
    // cout<<*p <<endl;
    // cout<<**p2 <<endl;
    // void update();
    // cout<<&i <<endl;
    // cout<<p <<endl;
    // cout<<*p2 <<endl;
    
    cout<<i <<endl;
    cout<<p <<endl;
    cout<<p2 <<endl;
    update(p2);
    cout<<i <<endl;
    cout<<p <<endl;
    cout<<p2 <<endl;
    return 0;
}