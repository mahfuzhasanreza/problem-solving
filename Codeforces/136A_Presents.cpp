#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int r[n];
    for(int i=0; i<n; i++){
        r[a[i]-1]=i+1;
    }

    for(int i=0; i<n; i++){
        cout<<r[i]<<" ";
    } cout<<endl;

    return 0;
}