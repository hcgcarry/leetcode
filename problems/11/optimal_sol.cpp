


    int maxArea(vector<int>& height) {
        int res=0,minh;
        int i=0;
        int j=height.size()-1;
        while(i<j)
        {
            minh=min(height[i],height[j]);
            res=max(res,minh*(j-i));
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return res;
    }