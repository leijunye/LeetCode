class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      if(m!=0) 
      {   
        for(int j=nums1.size();j>m;j--)       //ɾ��NUMS1����mλ�ú������
             nums1.pop_back();
        for(int i=0;i<n;i++)                  //��NUMS22��Ԫ���������NUMS1
          nums1.push_back(nums2[i]);           
        sort(nums1.begin(),nums1.end());      //��NUMS1��������
      }
      else{
          nums1=nums2;                         //��m����0����NUMS1Ϊ�գ�ֱ�Ӱ�nums2����nums1
      }
    }
};