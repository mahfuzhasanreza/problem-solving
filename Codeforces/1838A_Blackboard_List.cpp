#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);

        if(arr[0]<0){
            cout<<arr[0]<<endl;
            continue;
        }
        cout<<arr[n-1]<<endl;
    }

    return 0;
}