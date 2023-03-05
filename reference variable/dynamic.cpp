#include<iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main(){

    // char ch = 'q';
    // cout<< sizeof(ch)<<endl;

    // char* c = new char;
    // cout<< sizeof(c)<<endl;
    int n;
    cout<< "Enter the size of array";
    cin>>n;

    int * arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }
    
    cout<< getSum(arr, n);

    return 0;
}