class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> container;

        int l =0;
        int mxp = 0;

        for(int i =0; i < s.size();i++){
            while(container.count(s[i])){
                container.erase(s[l]);
                l++;
            }

            container.insert(s[i]);
            mxp = max(mxp, i-l+1);
        }

        return mxp;
    }
};
