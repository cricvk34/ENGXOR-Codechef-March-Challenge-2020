#include <iostream>
using namespace std;
void fastscan(int &number) 
{ 
    //variable to indicate sign of input number 
    bool negative = false; 
    register int c; 
  
    number = 0; 
  
    // extract current character from buffer 
    c = getchar(); 
    if (c=='-') 
    { 
        // number is negative 
        negative = true; 
  
        // extract the next character from the buffer 
        c = getchar(); 
    } 
  
    // Keep on extracting characters if they are integers 
    // i.e ASCII Value lies from '0'(48) to '9' (57) 
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
  
    // if scanned input has a negative sign, negate the 
    // value of the input number 
    if (negative) 
        number *= -1; 
} 

int main() {
	// your code goes here
	int t;
    fastscan(t);
    
    while(t--){
        int n,q;
         fastscan(n);
         fastscan(q);
        //cin>>n>>q;
        int a[n],b[q];
        int x;
        int counte=0,counto=0;
        for(int i=0;i<n;i++)
        {
             fastscan(a[i]);
            if(__builtin_popcount(a[i])%2==0)
            counte+=1;
            else
            counto+=1;
        }
        for(int i=0;i<q;i++){
             fastscan(b[i]);
            if(__builtin_popcount(b[i])%2==0)
            //cout<<counte<<" "<<counto<<endl;
            printf("%d %d\n",counte,counto);
            else
             printf("%d %d\n",counto,counte);
        }
    }
	return 0;
}

