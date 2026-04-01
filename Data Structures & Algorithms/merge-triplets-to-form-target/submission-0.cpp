class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool X = false, Y = false, Z = false;

        for(auto &t : triplets) {
            if(t[0] <= target[0] && 
               t[1] <= target[1] && 
               t[2] <= target[2]) {
                
                if(t[0] == target[0]) X = true;
                if(t[1] == target[1]) Y = true;
                if(t[2] == target[2]) Z = true;
            }
        }

        return X && Y && Z;
    }
};