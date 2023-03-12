// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
/*Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].*/
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,4,8,6};
    int currElement=arr[0];
    int nextElemt;
    int target=6;
    int tarIndices[2];
    for(int i=1;i<5;i++)
    {
      int sum=currElement+arr[i];
      if(sum==target)
      {
        cout<<"yes";
        tarIndices[0]=currElement;
        tarIndices[1]=arr[i];

      }
      currElement=arr[i];

    }
}