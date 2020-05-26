// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Cuboid //struture of a cuboid
{
    int l,b,h;
    
    
};

 // } Driver Code Ends


//User function Template for C++

void volume(Cuboid c)
{
    //Your code here
     int vol = c.l * c.b * c.h;
    cout<<vol<<endl;
    //cout<<endl;
}


// { Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int l,b,h;
	   cin>>l>>b>>h; //input l b and h
	   Cuboid c;
	   c.l=l;
	   c.b=b;
	   c.h=h;
	   volume(c); //function to find area
	}
	return 0;
}
  // } Driver Code Ends
