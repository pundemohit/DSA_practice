#include<iostream>
using namespace std;

int main(){
    int num = 5;

    cout<<num<<endl;

    //address of operator

    cout<<" Address of Stored variable is "<< &num<<endl;

    int *ptr = &num;

    cout<<"value is : " << *ptr <<endl;
    cout<<"address is : " << *ptr <<endl;

    double d = 0.43;
    double *d2 = &d;

    cout<<"value  is : " << *d2 <<endl;
    cout<<"address is : " << *d2 <<endl;

    cout<< "Size of integer is" <<sizeof(num)<<endl; 
    cout<< "Size of integer Pointer is" <<sizeof(ptr)<<endl;
    cout<< "Size of double Pointer is" <<sizeof(d2)<<endl;

    return 0;
}  