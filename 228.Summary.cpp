class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
      
       vector<string> result;
       
       if(nums.size()<1) return result;                   
       
       for(int i=0;i<nums.size();i++)
       {
          
          int j=i;
          while(j+1<nums.size()&&nums[j]+1==nums[j+1])j++;            //ѭ���ҵ�һ�����������һλ
          if(i==j)                                                    //��Ϊ���������֣�ת��������result
             {   string a;
                 char t[10];
                 sprintf(t,"%d",nums[i]);
                 result.push_back(t);
             }
          else                                                       //��������������ѿ�ʼ���������ת�������Ӹ���result
             {   string a;
                 char t[10];
                 sprintf(t,"%d",nums[i]);
                 a=t;
                 a=a+"->";
                 sprintf(t,"%d",nums[j]);
                 a=a+t;
                 result.push_back(a);
             }
             i=j;
       }
       return result;
    }
};