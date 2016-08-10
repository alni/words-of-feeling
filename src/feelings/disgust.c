#include <pebble.h>
#include "feelings/disgust.h"

Feeling disapproval_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Judgmental"
  }, {
    .text = "Loathing"
  }
};

Feeling disappointed_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Repugnant"
  }, {
    .text = "Revolted"
  }
};

Feeling awful_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Revulsion"
  }, {
    .text = "Detestable"
  }
};

Feeling avoidance_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Aversion"
  }, {
    .text = "Hesitant"
  }
};

Feeling disgust_feelings[DISGUST_FEELING_NUM] = {
  {
    .text = "Disapproval"
  }, {
    .text = "Disappointed"
  }, {
    .text = "Awful"
  }, {
    .text = "Avoidance"
  }
};

Feeling* feelings_get_disgust(int feeling_index) {
  switch (feeling_index) {
    case DISAPPROVAL_FEELING_INDEX:
      return disapproval_feeling;
    case DISAPPOINTED_FEELING_INDEX:
      return disappointed_feeling;
    case AWFUL_FEELING_INDEX:
      return awful_feeling;
    case AVOIDANCE_FEELING_INDEX:
      return avoidance_feeling;
    default:
      return NULL;
  }
}