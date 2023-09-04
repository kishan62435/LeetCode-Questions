//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

// } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        //code here.
        int l=0, r=n-1;
        vector<int>vec = {-1, -1};
        
        while(l<=r){
            if(a[l] == key && vec[0] == -1){
                vec[0] = l;
            }
            
            if(a[r] == key && vec[1] == -1){
                vec[1] = r;
            }
            
            if(vec[0] != -1 && vec[1] != -1) return vec;
            
            if(a[l]!=key) l++;
            if(a[r]!=key) r--;
            
        }
        return vec;
    }
  
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}

// } Driver Code Ends