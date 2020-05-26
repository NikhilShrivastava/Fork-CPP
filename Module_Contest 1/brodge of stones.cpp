{
//Initial Template for C++
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void findJumps(int, int);
//Position this line where user code will be pasted.
int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        long long N, X;
        cin >> N >> X;
        
        findJumps(N, X);
    }
    
    return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
// Function to find number of jumps
// N : number inscribed on the last stone.
// X : number on which we have to reach
void findJumps(int N, int X){
    
    int c=X/2;
    int d=N/2;
    int e=(N/2-X/2);
    int f=min(c,e);
    cout<<f<<endl;
    
    
    
    
    //cout << endl;
    
}
