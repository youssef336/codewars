// Given a non - empty array of integers, return the result of multiplying the values together in order.Example :

//     [ 1, 2, 3, 4 ] = > 1 * 2 * 3 * 4 = 24

// My solution

#include <vector>
int grow(std::vector<int> nums)
{
  int reslt = 1;
  for (int i = 0; i < nums.size(); i++)
  {
    reslt *= nums[i];
  }
  return reslt;
}