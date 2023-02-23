#include<iostream>
using namespace std;

int main(){
    //pointer to int is created, and point to some garbage address
    //int *p;

    //cout<< *p <<endl;

    int i = 6;
    int *p = &i;

    int *q =0;
    q = &i;

    cout<<"Before" << i <<endl;
    (*p)++;
    cout<<"After" << i <<endl;

    //copying a pointer.

    int *s = p;
    cout<< p << " - "<<s<<endl;
    cout<< *p << " - "<< *s<<endl;


    //Pointer Arithmetic
    int x= 3;
    int *t = &x;
    cout<< (*t)++<<endl;    

}