#include<reg52.h>

void delay(a)
{
	int i,j;
	for(i=0;i<a;i++)
		for(j=0;j<1000;j++);
}

main()
{
	while(1)
	{
		delay(100);
		P0=0xfe;
		delay(100);
		P0=0xfd;
		delay(100);
		P0=0xfb;
		delay(100);
		P0=0xf7;
		delay(100);
		P0=0xef;
		delay(100);
		P0=0xdf;
		delay(100);
		P0=0xbf;
		delay(100);
		P0=0x7f;
		delay(100);
		P0=0xbf;
		delay(100);
		P0=0xdf;
		delay(100);
		P0=0xef;
		delay(100);
		P0=0xf7;
		delay(100);
		P0=0xfb;
		delay(100);
		P0=0xfd;
		delay(100);
	}
}