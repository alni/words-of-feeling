#pragma once
#include "feelings.h"

#define SAD_FEELING_NUM 6
#define GUILTY_FEELING_INDEX 0
#define ABANDONED_FEELING_INDEX 1
#define DESPAIR_FEELING_INDEX 2
#define DEPRESSED_FEELING_INDEX 3
#define LONELY_FEELING_INDEX 4
#define BORED_FEELING_INDEX 5

extern Feeling guilty_feeling[INNERMOST_FEELING_NUM];

extern Feeling abandoned_feeling[INNERMOST_FEELING_NUM];

extern Feeling despair_feeling[INNERMOST_FEELING_NUM];

extern Feeling depressed_feeling[INNERMOST_FEELING_NUM];

extern Feeling lonely_feeling[INNERMOST_FEELING_NUM];

extern Feeling bored_feeling[INNERMOST_FEELING_NUM];

extern Feeling sad_feelings[SAD_FEELING_NUM];

Feeling* feelings_get_sad(int feeling_index);