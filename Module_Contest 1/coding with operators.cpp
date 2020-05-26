{
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
// Function Prototype with arguments a, b and c
void operations(int a, int b, int c);
//Position this line where user code will be pasted.
// Driver Code
int main(){
    
    int testcase;
    cin >> testcase;
    
    while(testcase-- > 0){
        
        int a, b, c;
        
        cin >> a >> b >> c;
        
        operations(a, b, c);
        
    }
    
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/* Function to do the operations.
* Arguments : a, b and c
*/
void operations(int a, int b, int c){
    
    long int p,q,r;
    p=pow(a,b);
    q=p^c;
    r=p%c;
    cout<<p<<endl<<q<<endl<<r<<endl;
    
    
}
