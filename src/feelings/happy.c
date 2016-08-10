#include <pebble.h>
#include "feelings/happy.h"

Feeling optimistic_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Inspired"
  }, {
    .text = "Open"
  }
};

Feeling intimate_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Playful"
  }, {
    .text = "Sensitive"
  }
};

Feeling peaceful_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Hopeful"
  }, {
    .text = "Loving"
  }
};

Feeling powerful_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Provocative"
  }, {
    .text = "Courgeous"
  }
};

Feeling accepted_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Fulfilled"
  }, {
    .text = "Respected"
  }
};

Feeling proud_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Confident"
  }, {
    .text = "Important"
  }
};

Feeling interested_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Inquisitive"
  }, {
    .text = "Amused"
  }
};

Feeling joyful_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Estatic"
  }, {
    .text = "Liberated"
  }
};

Feeling happy_feelings[HAPPY_FEELING_NUM] = {
  {
    .text = "Optimistic"
  }, {
    .text = "Intimate"
  }, {
    .text = "Peaceful"
  }, {
    .text = "Powerful"
  }, {
    .text = "Accepted"
  }, {
    .text = "Proud"
  }, {
    .text = "Interested"
  }, {
    .text = "Joyful"
  }
};

Feeling* feelings_get_happy(int feeling_index) {
  switch (feeling_index) {
    case OPTIMISTIC_FEELING_INDEX:
      return optimistic_feeling;
    case INTIMATE_FEELING_INDEX:
      return intimate_feeling;
    case PEACEFUL_FEELING_INDEX:
      return peaceful_feeling;
    case POWERFUL_FEELING_INDEX:
      return powerful_feeling;
    case ACCEPTED_FEELING_INDEX:
      return accepted_feeling;
    case PROUD_FEELING_INDEX:
      return proud_feeling;
    case INTERESTED_FEELING_INDEX:
      return interested_feeling;
    case JOYFUL_FEELING_INDEX:
      return joyful_feeling;
    default:
      return NULL;
  }
}