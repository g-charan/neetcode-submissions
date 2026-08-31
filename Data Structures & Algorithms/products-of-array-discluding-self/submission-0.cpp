class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int running_product = 1;
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> postfix(n);
        

        for( int i= 0; i < n; i++){
            prefix[i] = running_product;
            running_product *= nums[i];
        }

        int curr = 1;
        for(int i = n - 1; i >= 0; i--){
            postfix[i] = curr;
            curr *= nums[i];
        }
        vector<int> output(n);

        for(int i = 0; i < n ; i++){
            output[i] = prefix[i] * postfix[i];
        }

        return output;
    }
};
