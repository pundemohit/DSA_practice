#include <iostream>

using namespace std;
void bubble(int arr[], int n){
	for(int i = 0; i<n; i++){

        for(int j =0; j<n-i; j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main()
{
    int arr[10] = {4,6,9,2,3,7,1,11,0,5};
	bubble(arr, 10);
	for(int i= 0;i<10; i++){
		cout<<arr[i]<<" ";
	}
    return 0;
}

