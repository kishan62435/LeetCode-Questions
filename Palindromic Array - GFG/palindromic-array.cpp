//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:

    int reverse(int x){
        int reverse = 0;
        int temp = x;
        while(temp){
            reverse*=10;
            reverse+= temp%10;
            temp/=10;
        }
        // cout<<x<<" "<<reverse<<endl;
        if(x == reverse) return true;
        return false;
    }
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0; i< n; i++){
            bool result = reverse(a[i]);
            // cout<<result<<endl;

    	    if(!result){
    	        return 0;
    	    }
    	}
    	return 1;
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
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends