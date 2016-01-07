class Solution {
public:
    bool isPalindrome(string s) {
      if(s.size()==0||s.size()==1)return true;                      //��s�ĳ��ȵ���0��1������
      transform(s.begin(),s.end(),s.begin(),::toupper);             //��s�������ַ���ɴ�д
      int i=0,j=s.size()-1;
      while(i<j)                                                             
      {
         if(s[i]>'Z'||(s[i]<'A'&&s[i]>'9')||s[i]<'0'){i++;continue;} //�ҵ�һ��A��Z��0��9���ַ�Ϊֹ
         if(s[j]>'Z'||(s[j]<'A'&&s[j]>'9')||s[j]<'0'){j--;continue;} //ͬ��
         
          if(s[i]!=s[j])return false;                                //����Ӧ���ַ���ͬ�򷵻ؼ�
          else{  i++;j--; }                                          //����ͬ��������м����
        
      }
      return true;
    }
};