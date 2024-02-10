#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool linaerSearch(int *arr,int size,int target)
{
	// base case
	if(size == 0)
	 return false;
	if(arr[0] == target)
	 return true;
	else{
		bool remainingPart = linaerSearch(arr+1,size-1,target);
		return remainingPart; 
	}
	
}

int main(){
	int n;
	cin>>n;
	int key;
	cin>>key;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
	 cin>>arr[i];
     bool ans = linaerSearch(arr,n,key);
	if(ans)
	cout<<"present";
	else
	cout<<"not present";
}
