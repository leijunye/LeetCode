class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     
      nums1.insert(nums1.end(),nums2.begin(),nums2.end());//��NUMS2����NUMS1
      sort(nums1.begin(),nums1.end());                    //��NUMS1��������
     
      int i=nums1.size();                                 //����һ��I����NUMS1�ĳ���
     
      if(i%2!=0)                                          //�ж�NUNS1�ĸ���ΪΪ����������ż����
       return nums1[(i)/2];                               //������ȡNUMS1����ֵ
      else
       { double a=nums1[i/2],b=nums1[(i/2)-1];            //ż����ȡ�м�����ֵ��ƽ��ֵ
         return (a+b)/2;
       }
    }
};