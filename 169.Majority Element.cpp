class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int i=nums.size()/2;                      //��¼numsһ��ĳ���
       int sum=1;
       sort(nums.begin(),nums.end());            //��nums����
       if(nums.size()==1)return nums[0];
       for(int j=1;j<nums.size();j++)
       {
           if(nums[j]==nums[j-1])sum++;         //ǰһ�����һ����ͬ��sum�Լ�
           else sum=1;                          //��ͬ�����1
           
           if(sum>i)return nums[j];             
       }
       
    }
};