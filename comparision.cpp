#include<iostream>
using namespace std;


int selection(int A[], int n){
	int i,j,temp, min,count=0;
	for(i=0;i<n;i++){ 
		min=i;
		
		for(j=i+1;j<n;j++){
			count++;
			if(A[j]<A[min]){
				 min = j;
			}
		}
		temp  =A[i];
		A[i] = A[min];
		A[min]=temp;
	}
	return count;	
}
int bubble(int arr[],int n)
{

int temp,i,j,count=0;
for(i=0;i<n;i++)
	{
	
	for(j=0;j<n-i-1;j++)
		{
		count++;
		if(arr[j]>arr[j+1])

			{
			temp=arr[j];	
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}

		}

	}
return count;
}
int combine(int arr[],int low,int mid,int high){
	int c[high+1],i=low,j=mid+1,k=low,count=0;
	while(i<=mid && j<=high){
		count++;
		if(arr[i]>arr[j])
			c[k++]=arr[j++];
		else
			c[k++]=arr[i++];
	}

	if(i>mid){
		while(j<=high){
			count++;
			c[k++]=arr[j++];}
	}

	if(j>high){
		while(i<=mid){
			count++;
			c[k++]=arr[i++];}
	}
	for(i=low;i<=high;i++)
		arr[i]=c[i];
	return count;
}

int  split(int a[],int low,int high){
	int count;
	if(low<high){
		int mid=(low+high)/2;
		count=split(a,low,mid);
		count=split(a,mid+1,high);
		count=combine(a,low,mid,high);
	}
	return count;
}
int main(){
	int n,i,ms,bs,ss;
	cout<<"enter number of elements:";
	cin>>n;
	int a[n];
	cout<<"enter array elements:";
	for(i=0;i<n;i++)
		cin>>a[i];
	ss=selection(a,n);
	cout<<"Selection sort: "<<ss<<endl;
	bs=bubble(a,n);
	cout<<"bubble sort: "<<bs<<endl;
	ms=split(a,0,n-1);
	cout<<"merge sort: "<<ms<<endl;
	return 0;
}