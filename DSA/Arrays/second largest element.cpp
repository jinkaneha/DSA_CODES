//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int maxi=0;
	int smax=-1;
	int print2largest(int arr[], int n) {
	    // code here
	    for(int i=0;i<n;i++){
	        if(arr[i]>maxi){
	            smax=maxi;
	            maxi=arr[i];
	        }
	        else if(arr[i]<maxi){
	            if(arr[i]>smax){
	                smax=arr[i];
	            }
	        }
	    }
	    if(smax==0) return -1;
	    return smax;
	}
};