#pragma once
#include "feelings.h"

#define HAPPY_FEELING_NUM 8
#define OPTIMISTIC_FEELING_INDEX 0
#define INTIMATE_FEELING_INDEX 1
#define PEACEFUL_FEELING_INDEX 2
#define POWERFUL_FEELING_INDEX 3
#define ACCEPTED_FEELING_INDEX 4
#define PROUD_FEELING_INDEX 5
#define INTERESTED_FEELING_INDEX 6
#define JOYFUL_FEELING_INDEX 7

extern Feeling optimistic_feeling[INNERMOST_FEELING_NUM];

extern Feeling intimate_feeling[INNERMOST_FEELING_NUM];

extern Feeling peaceful_feeling[INNERMOST_FEELING_NUM];

extern Feeling powerful_feeling[INNERMOST_FEELING_NUM];

extern Feeling accepted_feeling[INNERMOST_FEELING_NUM];

extern Feeling proud_feeling[INNERMOST_FEELING_NUM];

extern Feeling interested_feeling[INNERMOST_FEELING_NUM];

extern Feeling joyful_feeling[INNERMOST_FEELING_NUM];

extern Feeling happy_feelings[HAPPY_FEELING_NUM];

Feeling* feelings_get_happy(int feeling_index);