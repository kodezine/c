#ifndef MODULOSENDER_H
#define MODULOSENDER_H

#include <stdint.h>

#if defined (PRIVATE)
    #define STATIC
#else
    #define STATIC static
#endif
void moduloSender_sendMessage(void);

#endif//MODULOSENDER_H