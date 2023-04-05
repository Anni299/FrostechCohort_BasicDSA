class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1;
        int answer=0;
        while (i<j){
            if (height[i]<height[j]){
                answer=max(answer,(j-i)*height[i]);
                i++;
            }
            else if (height[i]>height[j]){
                answer=max(answer,(j-i)*height[j]);
                j--;
            }
            else{
                answer=max(answer,(j-i)*height[i]);
                i++;
                j--;
            }
        }
        return answer;
    }
};
