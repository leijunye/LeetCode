class Solution {
public:
    int reverse(int x) {
        bool a=true;                            //��¼x�Ƿ�Ϊ����
        int i=0;                                //����i����¼x
        if(x<0)                                 //�ж�x�Ƿ�Ϊ��������Ϊ������ȡ��������¼����
        {
            x=-x;
            a=false;
        }
        while(x!=0)                            
        {    if(i!=0&&2147483647/i<10)return 0; //�ж�i�Ƿ�Խ��
              i=i*10+x%10;                      //��x���з�ת����i��¼
             x=x/10;
        }
       if(a)return i;
       else return -i;
    }
};