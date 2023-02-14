#include<iostream>
#include<vector>
using namespace std;

int largest(int arr[], int n)
    {
        int large = 0;
        for (int i; i<n; i++){
            if (large < arr[i]){
                large = arr[i];
            }
        }
        return large;
    }



int main(){
    int arr[10]= {1,2,3,4,5,6,7,11,0,10};
    cout<<"largest";
    cout<<largest(arr, 10);

    
}