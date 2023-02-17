#include<iostream>
#include<vector>
using namespace std;



int sumElement(int arr[],int n)
{
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum + arr[i];
        
    }
    return sum;
}

int main(){
    int arr[10]= {1,2,3,4,5,6,7,11,0,10};

    cout<<"sum";
    cout<<sumElement(arr, 10);
}