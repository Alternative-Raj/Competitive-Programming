#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int arr[100100];

int check(int mid){
    if(arr[mid]<arr[0]){    //create your own check function 
        return 1;
    }
    else{
        return 0;
    }
}



int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    int lo=0,hi=n-1,ans=0;  //changes acc to problem
	    while(lo<=hi){
	        int mid=(lo+hi)/2;
	        if(check(mid)){
	            ans=mid;
	            hi=mid-1;
	        }
	        else{
	            lo=mid+1;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}