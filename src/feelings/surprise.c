#include <pebble.h>
#include "feelings/surprise.h"

Feeling excited_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Energetic"
  }, {
    .text = "Eager"
  }
};

Feeling amazed_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Awe"
  }, {
    .text = "Astonished"
  }
};

Feeling confused_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Perplexed"
  }, {
    .text = "Disillusoned"
  }
};

Feeling startled_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Dismayed"
  }, {
    .text = "Shocked"
  }
};

Feeling surprise_feelings[SURPRISE_FEELING_NUM] = {
  {
    .text = "Excited"
  }, {
    .text = "Amazed"
  }, {
    .text = "Confused"
  }, {
    .text = "Startled"
  }
};

Feeling* feelings_get_surprise(int feeling_index) {
  switch (feeling_index) {
    case EXCITED_FEELING_INDEX:
      return excited_feeling;
    case AMAZED_FEELING_INDEX:
      return amazed_feeling;
    case CONFUSED_FEELING_INDEX:
      return confused_feeling;
    case STARTLED_FEELING_INDEX:
      return startled_feeling;
    default:
      return NULL;
  }
}