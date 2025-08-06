class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        vector<int> i;
        vector<int> visited(nums2.size(), 0);
        for (int i = 0; i < nums1.size(); ++i) {
            for (int j = 0; j < nums2.size(); ++j) {
                if (nums1[i] == nums2[j] && visited[j] == 0) {
                    s.insert(nums1[i]);
                    visited[j] = 1;
                    break;
                }
            }
        }
        for( auto it :s){
        i.push_back(it);
        }
        return i;
    }
};