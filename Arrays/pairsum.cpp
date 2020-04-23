//time complexity of this problem is o(n*n)
#include<iostream>
using namespace std;
void findpair(int *arr,int n,int sum){
	for(int i=0;i<n-1;i++)
	{
	for(int j=i+1;j<n;j++)
	{
	if(arr[i]+arr[j]==sum){
	cout<<i<<" "<<j;
	return;
	}
	}
	}
	cout<<"pair not found";
}
int main(){
	int n;
	cin>>n;
	int arr[10005];
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	int sum;
	cin>>sum;
	findpair(arr,sum,n);
}