#include <iostream>
#include <vector>

int searchingg(vector<int> &nums, int target)
{

    int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (nums[mid + 1] < nums[mid] && nums[mid + 1] < e)
        {
            return nums[mid];
        }
        if (nums[mid - 1] > nums[mid] && nums[mid - 1] > s)
        {
            return nums[mid - 1];
        }
        if (nums[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    vector<int> nums{4,5,6,7,0,1,2};
    int target =1;

    int s = searchingg(nums, target);

    return 0;
}