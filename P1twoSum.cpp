   vector<int> twoSum(vector<int> &nums, int target){
        vector<int> ans; // to store result

        unordered_map<int,int> mpp; // hash table

        for(int i =0; i < nums.size(); i++){
            if(mpp.find(target - nums[i]) != mpp.end()){c// finding target - nums[i] value
                ans.push_back(mpp[target - nums[i]]); // returning index of that element where target - nums[i] is found
                ans.push_back(i);

                return ans;
            }

            mpp[nums[i]] =i; // if not present then at nums[i] value add index along with it 
          

        }

        return ans;
    }
