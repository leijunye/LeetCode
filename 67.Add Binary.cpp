class Solution {
public:
    string addBinary(string a, string b) {
      string c;                         //����string������¼�������¶������ַ���
      char y;                           //����char�ͱ���y��¼ÿһλ��Ӻ�ĸ�λ�Ľ��
      int x=0,sum=0;                    //����int�ͱ���x,sum�ֱ��¼��λ������Ӻ������
      int i=a.size()-1,j=b.size()-1;            
     
      while(i>=0&&j>=0)
      {
          sum=(a[i]-'0')+(b[j]-'0')+x;
          x=sum/2;
          y=sum%2+'0';
          c=y+c;
           i--;
           j--;
      }
      while(i>=0){
         sum=(a[i]-'0')+x;
         x=sum/2;
         y=sum%2+'0';
         c=y+c;
         i--;
     }
      while(j>=0){
         sum=(b[j]-'0')+x;
         x=sum/2;
         y=sum%2+'0';
         c=y+c;
         j--;
     }
      if (x) c = "1" +c;  
      return c;
    }
};