//-----------------------------------------------------------------------------
#include <avr/wdt.h>
#include "lib/avr-misc/avr-misc.h"
#include "lib/avr-debug/debug.h"
//-----------------------------------------------------------------------------
int main()
{
    wdt_disable();

    //DEBUG_INIT();
    set_bits(DDRB, 0, 1, 2, 3, 7);

    while(1)
    {
        //DSTR("ABCDEF");
        mdelay(500);
        set_bits(PORTB, 7);
        mdelay(500);
        set_bits(PORTB, 0);
        mdelay(500);
        set_bits(PORTB, 1);
        mdelay(500);
        set_bits(PORTB, 2);
        mdelay(500);
        set_bits(PORTB, 3);
        mdelay(500);
        clr_bits(PORTB, 0, 1, 2, 3, 7);
    }

    return 0;
}
//-----------------------------------------------------------------------------
