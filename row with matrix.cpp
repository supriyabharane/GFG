class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
         // code here
        int max=INT_MIN;
        int row=-1;
        for(auto it:arr)
        {
            int val=count(it.begin(),it.end(),1);
            if(val>max && val>0)
            {
                max=val;
                row=find(arr.begin(),arr.end(),it)-arr.begin();
            }
        }
        return row;
    }
};