
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

uint32_t rawElements[21];

static void clearRawElements(void)
{
    size_t i = 0;
    for(i = 0; i < sizeof(rawElements)/sizeof(rawElements[1]); i++)
    {
        rawElements[i] = DUMMY_DATA32_VALUE;
    }
}

static void printStream(uint8_t *pCharStream)
{
    int i = 0;
    do{
        putchar(pCharStream[i++]);
    }while(pCharStream[i] != '\0');
}

static void printValues(uint32_t value32)
{
    char bytes[12];
    sprintf(bytes, "0x%08X%c",value32,'\0');
    printStream((uint8_t*)bytes);
}

static void printRawElements(void)
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

void moduloSender_sendMessage(void)
{
    clearRawElements();
    printValues(DUMMY_DATA32_VALUE);
    putchar('\n');
    printRawElements();
}
