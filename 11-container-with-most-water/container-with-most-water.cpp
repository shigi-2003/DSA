class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int size = height.size();
        int l =0;
        int r = size -1;


int maxArea = 0;


while (l<r){
    int width = r-l;
    int minHeight = min(height[l], height[r]);

    maxArea = max(maxArea, width * minHeight);

    if(height[l] <= height[r]){
        l++;

    }else{
        r--;
    }
}
return maxArea;
    }
};