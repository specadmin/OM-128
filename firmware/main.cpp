//-----------------------------------------------------------------------------
#include <avr/wdt.h>
#include "lib/avr-misc/avr-misc.h"
#include "lib/avr-debug/debug.h"
//-----------------------------------------------------------------------------
int main()
{
    wdt_disable();

    //DEBUG_INIT();
    set_bits(DDRB, 0, 1, 2, 3);

    while(1)
    {
        //DSTR("ABCDEF");
        set_bits(PORTB, 0, 1, 2, 3);
        mdelay(500);
        clr_bits(PORTB, 0, 1, 2, 3);
        mdelay(500);
    }

    return 0;
}
//-----------------------------------------------------------------------------
