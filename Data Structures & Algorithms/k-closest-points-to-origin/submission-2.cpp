class Solution {
public:

    vector<vector<int>> func(vector<vector<int>>& points, int k){

        vector<pair<int, vector<int>>> vec;
       

        for(int i=0; i < points.size(); i++){
            int dist = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            
            vec.push_back({dist, points[i]});
        }

        sort(vec.begin(), vec.end());

        vector<vector<int>> ans;

        for(int i=0; i < k; i++){
            ans.push_back(vec[i].second);


        }

        return ans;

        
            
        }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        return func(points, k);
    }
};