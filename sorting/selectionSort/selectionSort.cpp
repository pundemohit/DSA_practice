#include <iostream>

using namespace std;

void selection(int arr[], int n){
	for(int i =0; i<n-1; i++){
        int minIndex =i;

        for(int j = i+1; j<n; j++){

            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
            swap(arr[minIndex], arr[i]);
        }
    }
}

int main()
{
    
	int even[5] = {5,3,0,2,1};
	selection(even, 5);
	for(int i = 0; i<5; i++){
		cout<<even[i]<<endl;
	}
    return 0;
}
