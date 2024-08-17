  void merge(int arr[], int l, int mid, int r)
    {
         // Your code here
         vector<int>v;
         int left=l;
         int right=mid+1;
         
         while(left<=mid && right<=r){
             if(arr[left]<=arr[right]){
                v.push_back(arr[left]);
                left++;
             }
             else{
                v.push_back(arr[right]);
                right++;
                }
         }
         
         while(left<=mid) {
             v.push_back(arr[left]); 
             left++;
         }
         
         while(right<=r) {
             v.push_back(arr[right]);
             right++;
         }
         
         for(int i=l; i<=r;i++) {
             arr[i]=v[i-l];
         }
    }
    
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        
        if(l>=r) return ;
        
        int mid=l+(r-l)/2;
        
        mergeSort(arr,l,mid);
        
        mergeSort(arr,mid+1,r);
        
        merge(arr,l,mid,r);
    }