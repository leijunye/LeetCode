class Solution {
public:
    string numberToWords(int num) {
    int k,j,i,w=0;
	map<int, string>maps;                                                                                  //��MAP��¼�ַ�������
  maps[0] = ""; maps[1] = "One"; maps[2] = "Two"; maps[3] = "Three"; maps[4] = "Four"; maps[5] = "Five";
 maps[6] = "Six";maps[7]="Seven"; maps[8] = "Eight"; maps[9] = "Nine"; maps[10] = "Ten"; 
maps[11] = "Eleven"; maps[12] = "Twelve"; maps[13] = "Thirteen";maps[14] = "Fourteen"; maps[15] = "Fifteen";
 maps[16] = "Sixteen";maps[17] = "Seventeen"; maps[18] = "Eighteen"; maps[19] ="Nineteen"; maps[20] = "Twenty";
 maps[30] = "Thirty"; maps[40] = "Forty"; maps[50] = "Fifty"; maps[60] = "Sixty"; maps[70] = "Seventy"; maps[80]= "Eighty";
 maps[90] = "Ninety"; maps[100] = "Hundred"; maps[1000] = "Thousand"; maps[1000000] = "Million";maps[1000000000]="Billion";
	string a;                                                                                              //����string ��a��¼�ַ���
	if(num==0)a="Zero";                                                                                    //������Ϊ0����a����zero
	while (num != 0)                                                                                       
	{	i = num % 1000;                                                                                //����������ִӺ���ǰ����ÿ��λΪһ�飬��i��¼ÿһ������
		if(w==1&&i!=0)a=maps[1000]+" "+a;                                                              //�ж�i��ǧλ����ʮ��λ���ǰ���Ϊ
	    else if(w==2&&i!=0)a=maps[1000000]+" "+a;
	    else if(w==3&&i!=0)a=maps[1000000000]+" "+a;
		j = i % 100;                                                                                    //��j��¼i��ʮλ�͸�λ��������a
		if (j>0&&j <= 20) {                                                                             //��j����0��С��20�����maps��ֱ�Ӹ���a
                      a = maps[j]+" "+a;
		}
		if(j>20) {                                                                                      //��j����20����map�е�ʮλ�Ͱ�λ��ϸ���a
			int x = j % 10;                                                                         //����x��¼j�ĸ�λ
			j = (j / 10) * 10;                                                                      //��j��ʮλ����ȡ��
			if(x==0)a=maps[j]+" "+a;                                                                //��x����λΪ0����ֱ�Ӹ�ʮλ����a
		    else a =maps[j]+" "+ maps[x]+" "+a;                                                         //x��Ϊ0�����ɸ�λ��ʮλ��ϸ���a
		}
	    k = i / 100;                                                                                        //��k��¼i�İ�λ��������a
        if(k!=0){ a = maps[k]+" "+maps[100] +" "+ a;}
		w++;
		num = num / 1000;                                                                                //ȥ��num�ĺ���λ��
     	a.erase(a.find_last_not_of(" ") + 1);                                                                    //ȥ��a������ڵĿո�
	}
	return a;
    }
};