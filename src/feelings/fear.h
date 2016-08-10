#pragma once
#include "feelings.h"

#define FEAR_FEELING_NUM 6
#define SCARED_FEELING_INDEX 0
#define ANXIOUS_FEELING_INDEX 1
#define INSECURE_FEELING_INDEX 2
#define SUBMISSIVE_FEELING_INDEX 3
#define REJECTED_FEELING_INDEX 4
#define HUMILIATED_FEELING_INDEX 5

extern Feeling scared_feeling[INNERMOST_FEELING_NUM];

extern Feeling anxious_feeling[INNERMOST_FEELING_NUM];

extern Feeling insecure_feeling[INNERMOST_FEELING_NUM];

extern Feeling submissive_feeling[INNERMOST_FEELING_NUM];

extern Feeling rejected_feeling[INNERMOST_FEELING_NUM];

extern Feeling humiliated_feeling[INNERMOST_FEELING_NUM];

extern Feeling fear_feelings[FEAR_FEELING_NUM];

Feeling* feelings_get_fear(int feeling_index);