#include <pebble.h>
#include "feelings/sad.h"

Feeling guilty_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Remoresful"
  }, {
    .text = "Ashamed"
  }
};

Feeling abandoned_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Ignored"
  }, {
    .text = "Victimized"
  }
};

Feeling despair_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Powerless"
  }, {
    .text = "Vulnerable"
  }
};

Feeling depressed_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Inferior"
  }, {
    .text = "Empty"
  }
};

Feeling lonely_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Abandoned"
  }, {
    .text = "Isolated"
  }
};

Feeling bored_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Apathetic"
  }, {
    .text = "Indifferent"
  }
};

Feeling sad_feelings[SAD_FEELING_NUM] = {
  {
    .text = "Guilty"
  }, {
    .text = "Abandoned"
  }, {
    .text = "Despair"
  }, {
    .text = "Depressed"
  }, {
    .text = "Lonely"
  }, {
    .text = "Bored"
  }
};

Feeling* feelings_get_sad(int feeling_index) {
  switch (feeling_index) {
    case GUILTY_FEELING_INDEX:
      return guilty_feeling;
    case ABANDONED_FEELING_INDEX:
      return abandoned_feeling;
    case DESPAIR_FEELING_INDEX:
      return despair_feeling;
    case DEPRESSED_FEELING_INDEX:
      return depressed_feeling;
    case LONELY_FEELING_INDEX:
      return lonely_feeling;
    case BORED_FEELING_INDEX:
      return bored_feeling;
    default:
      return NULL;
  }
}