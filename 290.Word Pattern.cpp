class Solution {
public:
    bool wordPattern(string pattern, string str) {
        map<string,char>  patternTable;
        map<char,string>  wordTable;                           //��������hash���෴�Ĵ��pattern,str
        int k=1;                                               //����int�͵�k��¼str�е��ʵĸ���
        for(int i=0;i<str.size();i++){if(str[i]==' ')k++;}     //���ո�õ�str���ʵĸ���
        istringstream is(str);                                 //��istringstream�Կո�Ϊ�ָ����ָ�str��ÿһ������                         
        string os[k];  
        for(int i=0;i<k;i++)  is>>os[i];                       //��ÿ�����ʸ���os����
        
        if(k!=pattern.size())return false;                     //str�е��ʸ���������pattern�ĸ����򷵻ؼ�
        
         
        for(int j=0;j<pattern.size();j++)
         {   if(patternTable.count(os[j])==0&&wordTable.count(pattern[j])==0)//�ж�patternTable��wordTable��key���ֵĴ����Ƿ�Ϊ0
              {
                  patternTable[os[j]]=pattern[j];                            //��Ϊ0��ֵ
                  wordTable[pattern[j]]=os[j];
              }
             else
             {
                 if(patternTable.count(os[j])!=0&&wordTable.count(pattern[j])!=0)//�ж�patternTable��wordTable��key���ֲ�Ϊ0
                   {
                       if(os[j] == wordTable[pattern[j]] && pattern[j] == patternTable[os[j]]) continue;  
                           //�ж�patternTable��valueֵ����pattern��wordTable��valueֵ����os
                   } 
                  else return false;
             }
         }
          return true;  
    }
};