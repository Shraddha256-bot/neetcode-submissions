class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char, int> mp;
        int l = 0;
        int mxp = 0;
        int mxf = 0;

        int n = s.size();
        for(int i=0; i < s.size(); i++){
            mp[s[i]]++;
            mxf = max(mxf, mp[s[i]]);

            while((i-l+1) - mxf > k){
                mp[s[l]]--;
                l++;
            }
            mxp = max(mxp, i-l+1);
        }

        return mxp;
        }
};
