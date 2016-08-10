#include <pebble.h>
#include "feelings/fear.h"

Feeling scared_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Terrified"
  }, {
    .text = "Frightened"
  }
};

Feeling anxious_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Overwhelmed"
  }, {
    .text = "Worried"
  }
};

Feeling insecure_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Inadequate"
  }, {
    .text = "Inferior"
  }
};

Feeling submissive_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Worthless"
  }, {
    .text = "Insignificant"
  }
};

Feeling rejected_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Inadequate"
  }, {
    .text = "Alienated"
  }
};

Feeling humiliated_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Disrespected"
  }, {
    .text = "Ridiculed"
  }
};

Feeling fear_feelings[FEAR_FEELING_NUM] = {
  {
    .text = "Scared"
  }, {
    .text = "Anxious"
  }, {
    .text = "Insecure"
  }, {
    .text = "Submissive"
  }, {
    .text = "Rejected"
  }, {
    .text = "Humiliated"
  }
};

Feeling* feelings_get_fear(int feeling_index) {
  switch (feeling_index) {
    case SCARED_FEELING_INDEX:
      return scared_feeling;
    case ANXIOUS_FEELING_INDEX:
      return anxious_feeling;
    case INSECURE_FEELING_INDEX:
      return insecure_feeling;
    case SUBMISSIVE_FEELING_INDEX:
      return submissive_feeling;
    case REJECTED_FEELING_INDEX:
      return rejected_feeling;
    case HUMILIATED_FEELING_INDEX:
      return humiliated_feeling;
    default:
      return NULL;
  }
}