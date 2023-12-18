#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class solution {
  public:
    vector<int> twoSum(vector<int>& nums, int target){
      unordered_map<int, int> mp;

      for(int i = 0; i < nums.size(); i++){
        int compliment = target - nums[i];
        if(mp.find(compliment) != mp.end())  
          return {mp[compliment], i};
        mp.insert({nums[i], i});
      }
      return {};
    }
};

/*

int main(){
  vector<int> nums = {1,2,3,4,5};
  int target = 6;
  solution s;
  vector<int> result = s.twoSum(nums, target);
  if (result.size() ==0){
    cout<< "No complment found"<<endl;
  }
  else {
    cout<< "The indicies of the two complements are: " << result[0] <<  " and " <<result[1]<<endl;

  return 0;
    }
};

*/
