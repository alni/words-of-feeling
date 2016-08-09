#pragma once
#define INNERMOST_FEELING_NUM 2
#define FEELINGS_NUM 6
#define ANGER_FEELING_INDEX 0
#define DISGUST_FEELING_INDEX 1
#define SAD_FEELING_INDEX 2
#define HAPPY_FEELING_INDEX 3
#define SUPRISE_FEELING_INDEX 4
#define FEAR_FEELING_INDEX 5

typedef struct {
  char text[50];
  //Feeling* items[];
} Feeling;



extern Feeling feelings[FEELINGS_NUM];