class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";                  //��str����Ϊ0��ֱ�ӷ��ء���       
        string same;                                   //����string��same������¼��ͬ��ǰ׺
        int y=strs[0].size();                          //����int�ͱ���y��¼vector����̵��ַ���
         for(int i=0;i<strs.size()-1;i++){             //��forѭ������str
            if(strs[i].size()<y)                       //�ҵ���̵��ַ���
               y=strs[i].size();                       //������ַ������ȸ���y
         }
        int j=0;                                     
        while(j<y){
            for(int i=1;i<=strs.size()-1;i++){         //����vector�������ַ���
              if(strs[i][j]!=strs[i-1][j])             //��ÿ���ַ�����ÿ���ַ�����Ƚ�
                 return same;                          //���ҵ���ͬ���ַ��򷵻���ͬ��ǰ׺
            }
            same=same+strs[0][j];                      //����ͬ���ַ�����same
           j++;                                        
        }
        return same;
    }
};