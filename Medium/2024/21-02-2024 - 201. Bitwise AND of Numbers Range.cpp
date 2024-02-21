class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
       long long result = 0;
        while(left<right)
        {
            left>>=1;
            right>>=1;
            result++;
        }
        return left<<result;
    }
};
