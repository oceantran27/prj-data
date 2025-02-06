class Solution {
    public int maxSubArray(int[] nums) {
        //��̬�滮�㷨
        //dp[i]��ʾ��nums[i]��β�����͵�����������ĺ�
        int[] dp = new int[nums.length];
        int maxsub = dp[0] = nums[0];
        for(int i = 1;i < nums.length;i++)
        {
            dp[i] = Math.max(dp[i-1] + nums[i], nums[i]);
            maxsub = Math.max(dp[i], maxsub);
        }
        return maxsub;
    }
}
