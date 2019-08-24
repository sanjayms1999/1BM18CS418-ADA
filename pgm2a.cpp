#include <iostream>
using namespace std;

  void smallestElements(int a[],int n,int k)
  {
	  int i,j,temp,min;
	  for(i=0;i<k;i++)
	  {
		  min=i;
		    for(j=i+1;j<n;j++)
			{
			if(a[j]<a[min])
				min=j;
			}
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
			
		}
			
			cout<<k<< "the smallest element is:"<<a[k-1]<<"\n";
			
		  
  }
  
  int main()
  {
	  int *a,n,k;
	  cout<<"enter number of elements :";
	  cin>>n;
	  a=new int[n];
	  for(int i=0;i<n;i++)
	  {
		  cout<<"enter element :";
		  cin>>a[i];
		  
	  }
	  cout<<"enter k :";
	  cin>>k;
	  smallestElements(a,n,k);
	  return 0;
  }
