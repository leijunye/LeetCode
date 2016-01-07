class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
     int sum=0;                                   //��¼½�صĸ���
     for(int i=0;i<grid.size();i++)
     {
         for(int j=0;j<grid[0].size();j++)
           {   if(grid[i][j]=='1')                //��grid�ڵ�ÿһ����������� 
             {  search(grid,i,j);                 //������1�����search��������sum+1
                sum++;
             }
              if(grid[i][j]=='0')continue;         //������0������
           }
     }
     return sum;
    }
    
    void search(vector<vector<char>>& grid,int i,int j){
         grid[i][j]='2';                                           //���ѷ��ֵ�1��ֵΪ2�����Ϊ�Ա�����
         if(i-1>=0&&grid[i-1][j]=='1')search(grid,i-1,j);          //��ÿ��λ�õ��������ҽ��еݹ����
         if(j-1>=0&&grid[i][j-1]=='1')search(grid,i,j-1);
         if(i+1<grid.size()&&grid[i+1][j]=='1')search(grid,i+1,j);
         if(j+1<grid[0].size()&&grid[i][j+1]=='1')search(grid,i,j+1);
    }
};