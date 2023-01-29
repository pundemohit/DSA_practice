#include<iostream>
using namespace std;

void print (int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void swapAlternate(int arr[], int size){
	
	for(int i =0; i<size; i+=2){
		if(i+1<size){
			swap(arr[i], arr[i+1]);
		}
	}
}

int main(){
	
	int even[8] = {2,1,4,3,6,5,8,7};
	int odd[5] = {8,4,5,3,1};
	
	swapAlternate(even, 8);
	print(even, 8);
	
	swapAlternate(odd, 5);
	print(odd, 5);
}

