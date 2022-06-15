#include <iostream>
#include<bits/stdc++.h>
using namespace std;



 void dfs( vector<vector<char>>&arr,int i,int j){
    if(i-1>=0 && j-1>=0 && i+1<8 && j+1<8){
        if(arr[i-1][j-1]=='#' && arr[i+1][j+1]=='#' && arr[i+1][j-1]=='#' && arr[i-1][j+1]=='#'){
            cout<<i+1<<" "<<j+1<<endl;
            return;
        }
    }
 if(i+1<8 && j-1>0){
     if(arr[i+1][j-1]=='#'){dfs(arr,i+1,j-1);}
 }
 if(i+1<8 && j+1<8){
      if(arr[i+1][j+1]=='#'){dfs(arr,i+1,j+1);}
 }
}

int main() {
	// your code goes here
	

	int M=8,N=8;
	int t;
	cin>>t;
	while(t--){
	    int flag=0;
	   vector< vector<char>> arr(M, vector<char> (N));
	    	for(int i=0;i<8;i++){
	    	    for(int j=0;j<8;j++){
	    	        cin>>arr[i][j];
	    	    }
	    	}
	    	for(int j=0;j<4;j++){
	    	for(int i=0;i<8;i++){
	    	    
	    	    if(arr[j][i]=='#'){

	    	        dfs(arr,0,i);
	    	        flag=1;
	    	        break;
	    	    }
	    	}
	    	  if(flag==1){break;}  
	    	}
	    	
	}
	return 0;
}
