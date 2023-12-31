//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
       int z=0;
        
        for(int i=0;i<N;i++){
            if(arr[i]==1){
                z++;
            }
        }
        for(int i=0;i<N;i++){
            if(arr[i]>N){
                arr[i]=0;
                continue;
            }
            arr[i]-=1;
        }
        for(int i=0;i<N;i++){
            if(arr[i]==-1){
                arr[i]-=P;
                continue;
            }
            int x = arr[i];
            x  = x%P;
            arr[x]+=P;
        }
        for(int i=0;i<N;i++){
            arr[i] = arr[i]/P;
        }
        arr[0]=z;
        
        
        
    
    }
    
};


//{ Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}





// } Driver Code Ends
