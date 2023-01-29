#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
	
	int s = 0;
	int e= n-1;
	int mid = s +(e-s)/2;
	int ans= -1;
	
	while(s<=e){
		
		if(arr[mid]==key){
			ans = mid;
			e = mid -1;
		}
		else if(key> arr[mid]){
			s = mid+1;
		}
		else if(key < arr[mid]){
			e = mid -1;
		}
		
		mid = s +(e-s)/2;
	}
	return ans;
}

int LastOcc(int arr[], int n, int key){
	
	int s = 0;
	int e= n-1;
	int mid = s +(e-s)/2;
	int ans= -1;
	
	while(s<=e){
		
		if(arr[mid]==key){
			ans = mid;
			s = mid +1;
		}
		else if(key> arr[mid]){
			s = mid+1;
		}
		else if(key < arr[mid]){
			e = mid -1;
		}
		
		mid = s +(e-s)/2;
	}
	return ans;
}



int main(){
	 
	int even[12] = {1,1,2,2,2,2,3,3,4,4,5,5}; 
	cout<<"First occurrence of 2 is : "<<firstOcc(even, 12, 2)<<endl;
	
	cout<<"Last occurrence of 2 is : "<<LastOcc(even, 12, 2);
	  
	return 0;
}
