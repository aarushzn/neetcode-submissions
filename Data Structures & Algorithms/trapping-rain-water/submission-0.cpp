class Solution {
public:
    int trap(vector<int>& height) {

        long long left = 0;
        long long right = height.size() - 1;

        long long leftmax = height[left];
        long long rightmax = height[right];

        long long totalwater = 0;

        while(left < right) {

            if(leftmax < rightmax) {
                left++;

                leftmax = max(leftmax, (long long)height[left]);

                totalwater += leftmax - height[left];
            }
            else {
                right--;

                rightmax = max(rightmax, (long long)height[right]);

                totalwater += rightmax - height[right];
            }
        }

        return totalwater;
    }
};