// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
         // code here
        int s=0;
        int e= arr.size()-1;
        int ans = -1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(x == arr[mid]){
                ans = mid;
                e= mid -1;
            }
            else if(x < arr[mid]){
                e = mid-1;
                ans = mid;
            }
            else {
                s = mid+1;
                
            }
        }
        return ans;
        
    }
};