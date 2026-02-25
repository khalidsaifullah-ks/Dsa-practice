class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        int floorVal = -1;
        int ceilVal = -1;
        
        for (int i = 0; i < arr.size(); i++) {
            // Finding Floor: Largest element <= x
            if (arr[i] <= x) {
                if (floorVal == -1 || arr[i] > floorVal) {
                    floorVal = arr[i];
                }
            }
            
            // Finding Ceiling: Smallest element >= x
            if (arr[i] >= x) {
                if (ceilVal == -1 || arr[i] < ceilVal) {
                    ceilVal = arr[i];
                }
            }
        }
        
        return {floorVal, ceilVal};
    }
};