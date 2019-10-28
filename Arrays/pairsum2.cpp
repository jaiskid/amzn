#include<bits/stdc++.h>
using namespace std;
void findpair(int *arr,int n,int sum)
{
	unordered_map<int ,int > map;
	for(int i =0;i<n;i++){
		if(map.find(sum-arr[i])!=map.end()){
			cout<<"pair found at index"<<map[sum-arr[i]]<<"and"<<i;
			return;
		}
		map[arr[i]]=i;
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
	findpair(arr,n,sum);
}