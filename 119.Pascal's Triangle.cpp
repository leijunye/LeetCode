class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<int> b(rowIndex + 1);                    //����һ����rowIndex+1���ռ������b
       b[0]=1;                                         //�õ�һ��ֵ����0
       for(int i=1;i<=rowIndex;i++)                    
         for(int j=i;j>=0;j--)                         
         { 
           if (j == i) b[j]=b[j-1];                    //��b[j]Ϊ���һ��λ���������ǰһ����ֵ��Ϊ1
           else if (j == 0)                            //��b[j]�ڵ�һ��λ�������1
                     b[j] = 1
           else    
                     b[j] = b[j-1] + b[j];            //��b[j]�������ˣ������b[j-1] + b[j]
         }
    return b;
    }
};