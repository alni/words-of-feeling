#pragma once
#include "feelings.h"

#define DISGUST_FEELING_NUM 4
#define DISAPPROVAL_FEELING_INDEX 0
#define DISAPPOINTED_FEELING_INDEX 1
#define AWFUL_FEELING_INDEX 2
#define AVOIDANCE_FEELING_INDEX 3

extern Feeling disapproval_feeling[INNERMOST_FEELING_NUM];

extern Feeling disappointed_feeling[INNERMOST_FEELING_NUM];

extern Feeling awful_feeling[INNERMOST_FEELING_NUM];

extern Feeling avoidance_feeling[INNERMOST_FEELING_NUM];

extern Feeling disgust_feelings[DISGUST_FEELING_NUM];

Feeling* feelings_get_disgust(int feeling_index);