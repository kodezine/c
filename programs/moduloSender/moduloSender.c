
/**
 * @brief Functions to send
 * modulo times
 */
#include <stdio.h>
#include "moduloSender.h"

#define DUMMY_DATA32_VALUE (0xFABAEAAB)
typedef struct structMessage{
    size_t index;
    uint32_t data32;
}sMsg;

typedef union unionMessage{
    uint8_t bytes[sizeof(sMsg)];
    sMsg MsgElement;
}uMsgElement;

typedef struct structNineMsg{
    uint32_t msgNumber;
    uMsgElement msgElements[9];
}sMessage;

STATIC uint32_t rawElements[21];

STATIC void clearRawElements(void)
{
    size_t i = 0;
    for(i = 0; i < sizeof(rawElements)/sizeof(rawElements[1]); i++)
    {
        rawElements[i] = DUMMY_DATA32_VALUE;
    }
}

STATIC uint32_t printStream(uint8_t *pCharStream)
{
    uint32_t i = 0;
    while(pCharStream[i] != '\0')
    {
        putchar(pCharStream[i++]);
    }
    return(i);
}

STATIC void printValues(uint32_t value32)
{
    char bytes[12];
    sprintf(bytes, "0x%08X%c",value32,'\0');
    printStream((uint8_t*)bytes);
}

STATIC void printRawElements(void)
{
    size_t i = 0;
    putchar('\n');
    do{
        printValues(rawElements[i++]);
        putchar(' ');
        if(i % 4 == 0)
        {
            putchar('\n');
        }
    }while(i < 21);
    putchar('\n');
}
STATIC void printMessage(sMessage* pMsg)
{
    /* Print message on console...
    Message Number: 00000001 \t\t :0x00000000:0x00000000...
    */
}
void moduloSender_sendMessage(void)
{
    clearRawElements();
    printValues(DUMMY_DATA32_VALUE);
    putchar('\n');
    printRawElements();

}
