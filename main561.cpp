#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arrayPairSum(vector<int>& nums);
int main()
{
    cout<<"Hello"<<endl;
    int temp[6]={6,4,3,5,2,1};
    vector<int> nums(temp,temp+6);
    int result=arrayPairSum(nums);
    cout<<result<<endl;

    return 0;
}

int arrayPairSum(vector<int>& nums){
    sort(nums.begin(),nums.end());
    int temp=0;
    for(int i=0;i<nums.size();i=i+2){
        if(i<nums.size())
            temp+=nums[i];
    }
    return temp;
}
