class Solution{
  public:
    int Countpair(int arr[], int n, int sum){
        int left = 0;
        int right = n-1;
        int count = 0;
        while(left < right){
            if(arr[left] + arr[right] == sum){
                left++;
                right--;
                count++;
            }
            else if(arr[left] + arr[right] > sum){
                right --;
            }
            else
            {
                left++;
            }
        }
        return count==0?-1:count;
    }
};