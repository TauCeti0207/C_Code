#include <reg52.h>
sbit led = P0^0;
void main()
{
	led = 0;
	while(1);
}