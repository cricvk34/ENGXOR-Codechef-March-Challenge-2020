#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>n>>m;
	    int a[m]={};
	    vector<int>no;
	    vector<int>p;
	    int t;
	    for(int i=0;i<n;i++){
	       cin>>t;
	       no.push_back(t);
	    }
	    for(int i=0;i<n;i++){
	        cin>>t;
	       p.push_back(t);
	    }
	    unordered_map<int,int > umap; 
	    for(int i=0;i<n;i++)
        {
            umap[no[i]]=p[i]+umap[no[i]];
        }
        int min=0;
        vector<int>v;
         unordered_map<int,int >:: iterator itr;
	    for (itr = umap.begin(); itr != umap.end(); itr++) 
    { 
         v.push_back(itr->second);
     
     } 
     sort(v.begin(),v.end());
     cout<<v[0]<<endl;

}
	return 0;
}

