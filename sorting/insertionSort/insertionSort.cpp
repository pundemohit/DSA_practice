
#include <iostream>

using namespace std;
void insertion(int arr[], int n){
	
	for(int i = 0; i<n; i++){
		int temp=arr[i];
		int j = i-1 ;
        for(; j>=0; j--){
            if(arr[j]> temp){
                arr[j+1] = arr[j];
            }
            else{
            	break;
			}
        }
        arr[j+1] = temp;
    }
}
int main()
{
    int arr[10] = {4,6,9,2,3,7,1,11,0,5};
	insertion(arr, 10);
	for(int i= 0;i<10; i++){
		cout<<arr[i]<<" ";
	}
    return 0;
}
