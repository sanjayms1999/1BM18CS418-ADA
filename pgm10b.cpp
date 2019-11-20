#include<bits/stdc++.h>
using namespace std;
int a[10][10],n;
void floyds(){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
            }
        }
    }
    cout<<"All pair shortest path matrix is:\n";
    for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<a[i][j]<<"\t";
            }
            cout<<"\n";
        }
}
int main(){
    cout<<"Enter the no. of vertices:\n";
    cin>>n;
    cout<<"Enter the path matrix:\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    floyds();
    return 0;
}
