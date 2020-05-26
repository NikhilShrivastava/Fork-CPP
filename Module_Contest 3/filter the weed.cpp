// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

/*Function to print array elements
* Note : Mention argument also
* Comment the lines which are not useful
* or may result in wrong output
*/
void variousOperation(int arr[] ){
    
   cout<<arr[0]<<" "<<arr[2]<<endl;
}

// { Driver Code Starts.

// Driver code
int main() {
	
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
        
        int *arr = new int[N];
        
        for(int i = 0;i<N;i++){
            cin >> arr[i];
        }
        
        // Calling function to perform various operation on array
        variousOperation(arr);
    
	}
	
	return 0;
}  // } Driver Code Ends
