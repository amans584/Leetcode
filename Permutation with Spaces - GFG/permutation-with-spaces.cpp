//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:


    void prmt(string in, string out, vector<string>& str) {
        if(in.size() == 0) {
            str.push_back(out);
            return;
        }
        
        string op1 = out;
        string op2 = out;
        op1.push_back(' ');
        op1.push_back(in[0]);
        op2.push_back(in[0]);
        in.erase(in.begin()+0);
        prmt(in, op1, str);
        prmt(in, op2, str);
    }
    
    vector<string> permutation(string S){
        
        vector<string> st;
        string op = S.substr(0, 1);
        S.erase(S.begin());
        prmt(S, op, st);
        return st;
        
        // Code Here
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends