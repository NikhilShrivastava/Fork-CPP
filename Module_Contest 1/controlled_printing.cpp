{//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
// Function Prototype
void forkCPP();
//Position this line where user code will be pasted.
// Driver Code
int main(){
    
    int testcase;
    cin >> testcase;
    
    while(testcase-- > 0){
        
        int N;
        
        cin >> N;
        
        forkCPP(N);
        
    }
    
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
// Function to print ForkCPP
// N : input number
void forkCPP(int N){
    
    if(N%3==0 && N%5==0)
    cout<<"Fork CPP"<<endl;
    else if(N%3==0)
    cout<<"Fork"<<endl;
    else if(N%5==0)
    cout<<"CPP"<<endl;
  
    //cout << endl;  
}
