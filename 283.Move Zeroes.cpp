class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int i=0;
      for(int j=0;j<nums.size();j++)
      {
          if(nums[j]!=0)
          {
              nums[i]=nums[j];             //�����в�Ϊ��������ı�˳���ƶ���ǰ��
              i++;
          }
      }
      for(;i<nums.size();i++)
      {
          nums[i]=0;                        //��ʣ�µ�λ��ȫ����0
      }
    }
};