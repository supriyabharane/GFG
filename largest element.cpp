class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
          
           int maxElement = arr[0];  
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    return maxElement;

    }
};