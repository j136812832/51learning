#include <REGX52.H>

void Delay(unsigned int xms)
{
	unsigned char i, j;
	while(xms)
	{
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}
}


void main(){

	while(1){
	
		if(P3_1 == 0){   // ��whileѭ����ʱ����Ҫ���õ�����
		
			Delay(200); // ��ʱ����
			while(P3_1 == 0); //���ּ��
			Delay(200); // ��ʱ����
			P2_0 = ~P2_0; // ״̬ȡ��
			
		}
	}

}