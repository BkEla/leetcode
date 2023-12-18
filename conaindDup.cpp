#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
  public:
    bool isDup(vector<int>& nums){
      unordered_set<int> sett;

      for (int i : nums){
        if(sett.count(nums[i]))
          return true;
        sett.insert(nums[i]);
      }
      return false;
    }
};

/*
int main(){
  vector<int> nums = {1,2,3,6,3};
  Solution s;
  if (s.isDup(nums) == true){
    cout << " The array contains duplicates. ";
  }
  else {
    cout << " The array doesn't contain any duplicates. ";
  }
  return 0;
}
*/



