#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int leftIndex = 0;
        int rightIndex = height.size() - 1;
        area = (rightIndex - leftIndex) * min(height[leftIndex], height[rightIndex]);

        while (leftIndex < rightIndex){
            int tmpArea = (rightIndex - leftIndex) * min(height[leftIndex], height[rightIndex]);
            area = max(area, tmpArea);

            if (height[leftIndex] < height[rightIndex]){
                leftIndex ++;
            } else {
                rightIndex--;
            }
        }

        return area;
    }
};