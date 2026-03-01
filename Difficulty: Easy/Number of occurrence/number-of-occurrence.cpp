class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int l = 0, r = arr.size() - 1, f = -1, s = -1;

        while (l <= r) {
            int m = (l + r) / 2;
            if (arr[m] >= target) r = m - 1;
            else l = m + 1;
            if (arr[m] == target) f = m;
        }

        l = 0; r = arr.size() - 1;

        while (l <= r) {
            int m = (l + r) / 2;
            if (arr[m] <= target) l = m + 1;
            else r = m - 1;
            if (arr[m] == target) s = m;
        }

        return f == -1 ? 0 : s - f + 1;
       
    }
};
