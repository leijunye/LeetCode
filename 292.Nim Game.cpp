class Solution {
public:
    bool canWinNim(int n) {
        if(n%4==0)return false;        //����n����4�ı���ʱ���������䣬����false
        else return true;
    }
};