//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	    k=k%n;
	    for(int i=0;i<k/2;i++){
	        swap(arr[i], arr[k-i-1]);
	    }
	    for(int i=0;i<(n-k)/2;i++){
	        swap(arr[k+i], arr[n-i-1]);
	    }
	    for(int i=0;i<n/2;i++){
	        swap(arr[i], arr[n-i-1]);
	    }
	   // Your code goes here
	} 
		 

};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends