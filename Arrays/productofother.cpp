#include<iostream>
using namespace std;
void findproduct(int *arr,int n){
	int left[n],right[n];
	left[0]=1;
	for(int i=1;i<n;i++){
	left[i]=left[i-1]*arr[i-1];
	}
	right[n-1]=1;
	for(int j=n-2;j>=0;j--){
	right[j]=right[j+1]*arr[j+1];
	}
	for(int i=0;i<n;i++){
	arr[i]=left[i]*right[i];
	}
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];
	}
	findproduct(arr,n);
	for(int i=0;i<n;i++)
	{
	cout<<arr[i]<<" ";
	}
}