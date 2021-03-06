#include <pebble.h>
#include "feelings/anger.h"

Feeling hurt_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Embarrassed"
  }, {
    .text = "Devastated"
  }
};

Feeling threatened_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Insecure"
  }, {
    .text = "Jealous"
  }
};

Feeling hateful_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Resentful"
  }, {
    .text = "Violated"
  }
};

Feeling mad_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Furious"
  }, {
    .text = "Enraged"
  }
};

Feeling aggressive_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Provoked"
  }, {
    .text = "Hostile"
  }
};

Feeling frustrated_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Infuriated"
  }, {
    .text = "Irritated"
  }
};

Feeling distant_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Withdrawn"
  }, {
    .text = "Suspicious"
  }
};

Feeling critical_feeling[INNERMOST_FEELING_NUM] = {
  {
    .text = "Skeptical"
  }, {
    .text = "Sarcastic"
  }
};

Feeling anger_feelings[ANGER_FEELING_NUM] = {
  {
    .text = "Hurt",
    //.items = hurt_feeling
  }, {
    .text = "Threatened",
    //.items = threatened_feeling
  }, {
    .text = "Hateful",
    //.items = hateful_feeling
  }, {
    .text = "Mad",
    //.items = mad_feeling
  }, {
    .text = "Aggressive",
    //.items = aggressive_feeling
  }, {
    .text = "Frustated",
    //.items = frustrated_feeling
  }, {
    .text = "Distant",
    //.items = distant_feeling
  }, {
    .text = "Critical",
    //.items = critical_feeling
  }
};


Feeling* feelings_get_anger(int feeling_index) {
  switch (feeling_index) {
    case HURT_FEELING_INDEX:
      return hurt_feeling;
    case THREATENED_FEELING_INDEX:
      return threatened_feeling;
    case HATEFUL_FEELING_INDEX:
      return hateful_feeling;
    case MAD_FEELING_INDEX:
      return mad_feeling;
    case AGGRESSIVE_FEELING_INDEX:
      return aggressive_feeling;
    case FRUSTRATED_FEELING_INDEX:
      return frustrated_feeling;
    case DISTANT_FEELING_INDEX:
      return distant_feeling;
    case CRITICAL_FEELING_INDEX:
      return critical_feeling;
    default:
      return NULL;
  }
}