// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
// Prints minimum number of platforms reqquired 

class Solution {
  public:
    static bool comp(Job a, Job b){
        int x1 = a.profit;
        int x2 = b.profit;
        return x1>x2; //desc
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        vector<int> ans;
        int prof=0;
        int numj=0;
        sort(arr,arr+n,comp);
        int m=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i].dead>m)
                m = arr[i].dead;
        }
        
        int a[m+1];
        for(int i=0;i<=m;i++)
            a[i]=-1;
        
        /*for(int i=0;i<n;i++){
            //cout<<arr[i].id<<" "<<arr[i].dead<<" "<<arr[i].profit<<"\n";
            if(a[arr[i].dead - 1]==-1){
                prof += arr[i].profit;
                a[arr[i].dead - 1] = arr[i].id;
            }
            else{
                int k = 1;
                while(k<n && a[arr[i].dead - k]!=-1){
                    k++;
                }
                if(k>=n){
                    continue;
                }
                else{
                    prof += arr[i].profit;
                    a[arr[i].dead - k] = arr[i].id;
                }
            }
        }*/
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead;j>0;j--){
                if(a[j]==-1){
                    prof += arr[i].profit;
                    a[j] = arr[i].id;
                    numj++;
                    break;
                }
            }
        }
        
        ans.push_back(numj);
        ans.push_back(prof);
        return ans;
    } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends