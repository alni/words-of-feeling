#pragma once
#include "feelings.h"

#define SURPRISE_FEELING_NUM 4
#define EXCITED_FEELING_INDEX 0
#define AMAZED_FEELING_INDEX 1
#define CONFUSED_FEELING_INDEX 2
#define STARTLED_FEELING_INDEX 3

extern Feeling excited_feeling[INNERMOST_FEELING_NUM];

extern Feeling amazed_feeling[INNERMOST_FEELING_NUM];

extern Feeling confused_feeling[INNERMOST_FEELING_NUM];

extern Feeling startled_feeling[INNERMOST_FEELING_NUM];

extern Feeling surprise_feelings[SURPRISE_FEELING_NUM];

Feeling* feelings_get_surprise(int feeling_index);