class Solution {
    public:
        int arithmeticTriplets(vector<int>& nums, int diff) {
            int output = 0;
            for (int i = 0, j = 1, k = 2; k<nums.size();){
                int diffJI = nums[j] - nums[i];
                int diffKJ = nums[k] - nums[j];
                if(diffJI == diff && diffKJ == diff)
                {
                    output++;
                    i++;
                    j++;
                    k++;
                }
                else if(diffKJ < diff)
                {
                    k++;
                }
                else if(diffJI < diff) {
                    j++;
                }
                else {
                    i++;
                }
            }
            return output;
        }
    };

