class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0) return false;            //��xС��0���򷵻ؼ�
    int a=0;                         //��¼x�ķ�ת���ֵ
    int i=x;                         //��¼��x��ֵ
    while(x!=0)
        {   a=a*10+x%10;             //ʹx��ת������a
            x=x/10;
        }
    if(i==a)return true;             //����ת������򷵻���
    else return false;
    }
};