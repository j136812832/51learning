#include <REGX52.H>
#include <INTRINS.H>

void Delay500ms()		//@12.000MHz
{
	unsigned char i, j, k;

	_nop_(); //使用_nop_()，添加#include <INTRINS.H>编译才不会警告
	i = 4;
	j = 205;
	k = 187;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void main(){
 
	 P2 = 0x00; // 亮
	 Delay500ms();
	 P2 = 0xFF; // 灭
	 Delay500ms();

}
