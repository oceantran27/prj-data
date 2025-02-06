class Solution {
    public boolean canJump(int[] nums) {
        int len = nums.length;
        int max_jump = 0;
        for(int i=0;i<len;i++)
        {
            if( max_jump >= len -1 || i > max_jump )   //�Ѿ����Ե����յ㣬�����޷����ﵱǰλ��
                break;
            max_jump = Math.max( max_jump , i+nums[i]);
        }
        return max_jump >= len-1;
    }
}