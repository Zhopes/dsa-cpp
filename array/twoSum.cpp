#include<iostream>
#include<vector>
using namespace std;

// Time complexity:O(n^2)

vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};                
                }
            }
        }
  return{};
}

int main(){
    int n;         
    cin >> n;

    vector<int> nums(n);
    //input
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int target ;
    cin >> target;

    vector<int> result = twoSum(nums, target);
    
    if(!result.empty()){
        cout<<result[0]<<" and "<<result[1]<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    return 0;
  }