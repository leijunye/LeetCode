class Solution {
public:
    string countAndSay(int n) {
    string a="1";                        //����string�͵�a��ֵΪ1
    for(int i=1;i<n;i++)                 //��forѭ����aִ��n��count
    {
      a=count(a);
    }
    return a;
 }
    string count(string q)              //����һ��count�������ַ�����������
    {   string p="";          
        int x=0,k=1;                    //����int��x,k��x���ڼ�¼λ�ã�k���ڼ�¼��ͬ�ַ����ֵĴ���
        int j=q.size();                 //����int��j����¼q�ĳ���
        while(x!=j)                     //��whileѭ�����ַ���q���б���
        {
         if(x+1<j&&q[x]==q[x+1])        //����һλ���ַ�����ǰһλ���ַ�����x����ƣ�k���ִ���+1
           { 
              x++;
              k++;
           }
         else                            //����һλ���ַ���ǰһλ����ͬ�����һ�²���
         { char t[256];
           string s;
           sprintf(t, "%d", k);         //��k��int��ת��string��
           s = t;
           p.push_back(s[0]);           //��k��¼�Ĵ��������ַ���p��
           p.push_back(q[x]);           //��ǰһλ���ַ�����q��
           x++;                         //x���������ƶ�
           k=1;                         //k��¼�����ص���1
         }
        }
        return p;
    }
};