class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int left = 1;
        int right = nums.size()-1;  // for 5 elements. only taking 1 to 4 becuz one number is duplicate so max 4 will be there

        while(left<right){
        int mid = left + (right-left)/2;
        int cnt = 0; 
        //count numbers which are smaller than mid 
            for(auto num: nums){
                if(num<=mid){
                    cnt++;
                }
            }

            if(cnt > mid ) // that dubplicate number(extra index) will have to on that side
            {
                right = mid;
            }
            else{
                //on right isde
                left = mid+1;
            }
        }
    return left; //index where it stops is the answer (the duplicate one)
    }
};