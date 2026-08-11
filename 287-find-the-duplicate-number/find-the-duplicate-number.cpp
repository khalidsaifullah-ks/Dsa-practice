class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //approch2 fast AND slow pointer
        int slow = nums[0];
        int fast = nums[0];

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
        if (slow == fast){
            slow = nums[0];
            while(slow != fast){
                slow = nums[slow];
                fast = nums[fast];
            }
        }
        return slow;
    }
};