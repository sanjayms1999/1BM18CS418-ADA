#include<iostream>
using namespace std;

void combine(int arr[],int low,int mid,int high){
	int c[high+1],i=low,j=mid+1,k=low;
	while(i<=mid && j<=high){
		if(arr[i]>arr[j])
			c[k++]=arr[j++];
		else
			c[k++]=arr[i++];
	}
	if(i>mid){
		while(j<=high)
			c[k++]=arr[j++];
	}
	if(j>high){
		while(i<=mid)
			c[k++]=arr[i++];
	}
	for(i=low;i<=high;i++)
		arr[i]=c[i];
}

void split(int a[],int low,int high){
	if(low<high){
		int mid=(low+high)/2;
		split(a,low,mid);
		split(a,mid+1,high);
		combine(a,low,mid,high);
	}
}

int main(){
	int n,i;
	cout<<"Enter the number of elements:\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the array elements:\n";
	for(i=0;i<n;i++)
		cin>>arr[i];
	split(arr,0,n-1);
	cout<<"Sorted array is:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\n";	
	return 0;
}