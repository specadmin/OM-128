//-----------------------------------------------------------------------------
#include "lib/avr-misc/avr-misc.h"
//-----------------------------------------------------------------------------
int main()
{
    disable_watchdog();
    set_bits(DDRB, 0, 1, 2, 3, 7);
    set_bits(PORTB, 0);
    mdelay(400);
    set_bits(PORTB, 1);
    mdelay(400);
    set_bits(PORTB, 2);
    mdelay(400);
    set_bits(PORTB, 3);
    mdelay(400);

    while(1)
    {
        set_bit(PORTB, 7);
        mdelay(500);
        clr_bits(PORTB, 7);
        mdelay(500);
    }

    return 0;
}
//-----------------------------------------------------------------------------
