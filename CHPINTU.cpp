/*Pintu sells M different types of fruits (numbered 1 through M). He sells them in N baskets (numbered 1 through N), 
where for each valid i, the i-th basket costs Pi and it contains fruits of type Fi. Chef does not have too much money, 
so he cannot afford to buy everything; instead, he wants to choose one of the M available types and purchase all the 
baskets containing fruits of that type.
Help Chef choose the type of fruit to buy such that he buys at least one basket and the total cost of the baskets he buys 
is the smallest possible.*/
Example Input
1
6 4
1 2 3 3 2 2
7 3 9 1 1 1
Example Output
5

Example case 1:

The sum of all baskets with fruits of type 1 is 7.
The sum of all baskets with fruits of type 2 is 5.
The sum of all baskets with fruits of type 3 is 10.
The sum of all baskets with fruits of type 4 is 0 because there are no such baskets.
 
	Hint: We can directly use Hash Map to solve the question



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

