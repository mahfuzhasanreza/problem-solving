#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		long long n, k;
        cin>>n>>k;

        if(n%2==0){
            cout<<"YES"<<endl;
            continue;
        }
        if(k%2!=0){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;

	}

	return 0;
}