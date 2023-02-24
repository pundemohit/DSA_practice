#include<iostream>
using namespace std;

int main(){

    int a[10] = {1,2,3,4,5};
    char ch[10] = "Monster";
    cout<<a<<endl;
    cout<<ch<<endl;

    char *c = &ch[0];

    cout<<c<<endl;

    char temp = 'ch';
    char *p = &temp;

    cout<<p<<endl;
    return 0;
}