class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());     //��NUMS��������
         int i;
        for(i=0;i<nums.size();i++)
         if(nums[i]!=i)return i;           //������Ƚϣ���ͬ�򷵻�
         
        return i;                          //������ͬ�򷵻����һ����
    }
};