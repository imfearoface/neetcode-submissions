class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       auto max_ = -1;
       int p2 = arr.size() - 1;
       while(p2 >= 0)
       {
        auto cur = arr[p2];
        arr[p2] = max_;
        max_ = max(cur, max_);
        p2--;
       }
        return arr;
    }
};