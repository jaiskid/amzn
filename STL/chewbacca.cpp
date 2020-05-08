#include<bits/stdc++.h>
using namespace std;
const int n=10005;
char arr[n];
void chewbacca(char *arr){
	int i=0;
	if(arr[i]=='9'){
		i++;
	}
	for(;arr[i]!='\0';i++){
		int digit=arr[i]-'0';
		if(digit>=5){
			digit=9-digit;
			arr[i]=digit+'0';
		}

	}
	cout<<arr;
}
int main(){
      #ifndef ONLINE_JUDGE
 	  freopen("input.txt","r",stdin);
 	  freopen("output.txt","w",stdout);
      #endif
 	  cin>>arr;
 	  chewbacca(arr);
}
		