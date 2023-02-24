#include<iostream>
using namespace std;

int main(){
    /*
    int arr[10] = {0, 10, 20, 30};
    cout<<" Address of first memory block in array is :"<<arr<<endl;
    cout<<" Address of first memory block in array is :"<< &arr[0]<<endl;

    cout<<"1st "<<*arr<<endl;
    cout<<"2nd "<<*arr+1<<endl;
    cout<<"3rd "<<*(arr+1)<<endl;
    cout<<"4nd "<<*(arr)+1<<endl;
    cout<<arr[2]<<endl;

    int i = 3;
    cout<< i[arr]<<endl;

    int temp[10];
    cout<<sizeof(temp) <<endl;

    int *ptr =&temp[0];
    cout<<sizeof(ptr) <<endl;
    cout<<sizeof(*ptr) <<endl;
    cout<<sizeof(&ptr) <<endl;
    

   int a[20] ={1,2,3,4};
   cout<<a<<endl;
   cout<<&a<<endl;
   cout<<&a[0]<<endl<<endl;

    int *p = &a[0];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    */

   int ar[10];
    // ar = ar+1;

    int *ptrr = &ar[0];
    cout<< ptrr << endl;
    ptrr = ptrr +1;
    cout<< ptrr << endl;


    return 0;
}