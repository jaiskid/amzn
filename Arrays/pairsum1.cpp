//this approach takes o(nlogn) 
#include<bits/stdc++.h>
using namespace std;
void findpair(int *arr,int n,int sum)
{
	int low=0;
	int high=n-1;
	while(low<high){
		cout<<low<<" "<<high<<endl;
	if(arr[low]+arr[high]==sum){
	cout<<"pair found";
	return;
	}
	(arr[low]+arr[high]<sum)?low++:high--;
	}
	cout<<"pair not found";
}
int main(){
	int n;
	cin>>n;
	int arr[1005];
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	sort(arr,arr+n);
	int sum;
	cin>>sum;
	findpair(arr,n,sum);
}