// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Car
{
    public:
    //data members
    int tank;
    int q;
    //member functions
    Car(){}
    Car(int tank_capacity,int quality)
    {
        tank=tank_capacity;
        q=quality;
    }
    
};

 // } Driver Code Ends


//User function Template for C++

void fillings(Car cars[], int n, int distance)
{
   int d,x;
    for(int i=0; i<n; i++){
        d = 1+((cars[i].tank)%cars[i].q);
        x = ceil((float)distance/d);
        cout<<x<<" ";
    }
    cout<<endl;
}

// { Driver Code Starts.



int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int dis;
	    cin>>dis;
	    Car arr[n];
	    for(int i=0;i<n;i++)
	    {
	        int tank_capacity,quality;
	        cin>>tank_capacity>>quality;
	        Car c(tank_capacity,quality);
	        arr[i]=c;
	    }
	    fillings(arr,n,dis);
	}
	return 0;
}
  // } Driver Code Ends
