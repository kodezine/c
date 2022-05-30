#include <stdint.h>
#include <limits.h>
#include <bool.h> /*"memory alignment" endianness*/

typedef struct segment_t {
    int32_t currentPosition;
    bool directionOfMotion;
    bool segmentAtPositiveMaximumLimit;
    bool segmentAtNegativeMaximumLimit;
}segment;


typedef enum {
    kAddOnLiftMoveUp = (1),
    kAddOnLiftMoveDown = (-1),
    kAddOnLiftDoNotMove = (0)
}addOnLiftMovement;

addOnLiftMovement allowAddOnLiftMovementBasedOnMainLift(segment* pMainLift, segment* pAddOnLift);



