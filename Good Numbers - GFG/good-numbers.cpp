//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
  bool isvalid(int x, int y) {
      
      int dig = x % 10;
      int sum = dig;
      
      if( dig == y ){
          return false;
      }
      
      x /= 10;
      while(x) {
           dig = x%10;
           
           if( dig == y || dig <= sum){
               return false;
           }
           else {
               sum += dig;
               x /= 10;
           }
      }
      return true;
  }
  
    vector<int> goodNumbers(int L, int R, int D) {
        
        vector<int> vec;
        
        for( int i = L; i <= R; i++) {
            if(isvalid(i, D)) {
                vec.push_back(i);
            }
        }
        
        return vec;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R, D;
        cin >> L >> R >> D;
        Solution ob;
        vector<int> ans = ob.goodNumbers(L, R, D);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends