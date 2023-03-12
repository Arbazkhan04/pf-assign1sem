/*There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

Note that multiple kids can have the greatest number of candies.
Example 2:

Input: candies = [4,2,1,1,2], extraCandies = 1
Output: [true,false,false,false,false] 
Explanation: There is only 1 extra candy.
Kid 1 will always have the greatest number of candies, even if a different kid is given the extra candy.*/
#include<iostream>
using namespace std;
// bool isGreatested(int num,int *arr);
int main()
{
  int candies[5] = {4,2,5,1,5};
  bool candiesResult[5]={};
  int extraCandies = 1;
  int count=0;
  bool isTure=false;
  for(int i=0;i<5;i++)
  {
    int result=extraCandies+candies[i];
     for(int j=0;j<5;j++)
     {
        if(result>candies[j])
        {
           count++;
        }
     }
     if(count==5)
     {
     candiesResult[i]=true;
     count=0;
     }
      else if(count!=5)
     {
     candiesResult[i]=false;
     count=0;
     }

  }
  for(int i=0;i<5;i++)
  {
    cout<<candiesResult[i]<<" ";
  }

}

