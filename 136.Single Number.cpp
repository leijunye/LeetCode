class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int result = nums[0];                      //����һ��int���͵ı���result������nums�ĵ�һ��ֵ
       if(nums.size()==1)return result;          //��nums�ĳ���Ϊ1�򷵻�result
       for(int i = 1; i < nums.size(); i++)      
        result ^=nums[i];                        //��nums[i]��result�����������    
       return result; 
    }
};