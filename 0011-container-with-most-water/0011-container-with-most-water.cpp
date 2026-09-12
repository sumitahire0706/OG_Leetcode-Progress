class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int lp=0,rp=height.size()-1;

        while(lp<rp)
        {
            int wd=rp-lp;
            int hg=min(height[lp],height[rp]);
            int cont=hg*wd;
            maxwater=max(maxwater,cont);
            height[lp]<height[rp]?lp++:rp--;
            
        }
        return maxwater;
        
    }
};