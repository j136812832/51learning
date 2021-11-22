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
	
		if(P3_1 == 0){   // 大while循环的时候破要利用到抖动
		
			Delay(200); // 延时消抖
			while(P3_1 == 0); //松手检测
			Delay(200); // 延时消抖
			P2_0 = ~P2_0; // 状态取反
			
		}
	}

}