class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        bool flag=false;
        map<char, int> sm;
        map<char, int> tm;
        for (char i : s) {
            sm[i]++;
        }
        for (char i : t) {
            tm[i]++;
        }
       
    return sm==tm;
    }
};