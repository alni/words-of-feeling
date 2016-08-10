#include <pebble.h>
#include "feelings.h"
#include "feelings/anger.h"
#include "feelings/disgust.h"
#include "feelings/sad.h"
#include "feelings/happy.h"
#include "feelings/surprise.h"
#include "feelings/fear.h"

static Window *s_main_window;
//static TextLayer *s_text_layer;
static MenuLayer *s_menu_layer;

static int s_menu_index = -1;
static int s_sub_menu_index = -1;

static uint16_t get_num_rows_callback(MenuLayer *menu_layer, uint16_t section_index, void *context) {
  //return NUM_WINDOWS;
  //return 8;
  if (s_sub_menu_index > -1) {
    return INNERMOST_FEELING_NUM;
  }
  switch (s_menu_index) {
    case ANGER_FEELING_INDEX:
      return ANGER_FEELING_NUM;
    case DISGUST_FEELING_INDEX:
      return DISGUST_FEELING_NUM;
    case SAD_FEELING_INDEX:
      return SAD_FEELING_NUM;
    case HAPPY_FEELING_INDEX:
      return HAPPY_FEELING_NUM;
    case SURPRISE_FEELING_INDEX:
      return SURPRISE_FEELING_NUM;
    case FEAR_FEELING_INDEX:
      return FEAR_FEELING_NUM;
    default:
      return FEELINGS_NUM;
      break;
  }
}

static void draw_row_callback(GContext *ctx, const Layer *cell_layer, MenuIndex *cell_index, void *context) {
  static Feeling curr_feelings;
  bool feeling_found = false;
  //menu_cell_basic_draw(ctx, cell_layer, feelings[cell_index->row].text, NULL, NULL);
  if (s_sub_menu_index > -1) {
    Feeling *sub_feelings = NULL;
    switch (s_menu_index) {
      case ANGER_FEELING_INDEX:
        sub_feelings = feelings_get_anger(s_sub_menu_index);
        break;
      case DISGUST_FEELING_INDEX:
        sub_feelings = feelings_get_disgust(s_sub_menu_index);
        break;
      case SAD_FEELING_INDEX:
        sub_feelings = feelings_get_sad(s_sub_menu_index);
        break;
      case HAPPY_FEELING_INDEX:
        sub_feelings = feelings_get_happy(s_sub_menu_index);
        break;
      case SURPRISE_FEELING_INDEX:
        sub_feelings = feelings_get_surprise(s_sub_menu_index);
        break;
      case FEAR_FEELING_INDEX:
        sub_feelings = feelings_get_fear(s_sub_menu_index);
        break;
      default:
        break;
    }
    if (sub_feelings != NULL) {
      curr_feelings = sub_feelings[cell_index->row];
      feeling_found = true;
    }
  } else {
    switch (s_menu_index) {
      case ANGER_FEELING_INDEX:
        curr_feelings = anger_feelings[cell_index->row];
        feeling_found = true;
        break;
      case DISGUST_FEELING_INDEX:
        curr_feelings = disgust_feelings[cell_index->row];
        feeling_found = true;
        break;
      case SAD_FEELING_INDEX:
        curr_feelings = sad_feelings[cell_index->row];
        feeling_found = true;
        break;
      case HAPPY_FEELING_INDEX:
        curr_feelings = happy_feelings[cell_index->row];
        feeling_found = true;
        break;
      case SURPRISE_FEELING_INDEX:
        curr_feelings = surprise_feelings[cell_index->row];
        feeling_found = true;
        break;
      case FEAR_FEELING_INDEX:
        curr_feelings = fear_feelings[cell_index->row];
        feeling_found = true;
        break;
      default:
        curr_feelings = feelings[cell_index->row];
        feeling_found = true;
        break;
    }
  }
  if (feeling_found) {
    menu_cell_basic_draw(ctx, cell_layer, curr_feelings.text, NULL, NULL);
  }
  /*switch(cell_index->row) {
    case 0:
      menu_cell_basic_draw(ctx, cell_layer, "Checkbox List", NULL, NULL);
      break;
    case 1:
      menu_cell_basic_draw(ctx, cell_layer, "Choice Dialog", NULL, NULL);
      break;
    case 2:
      menu_cell_basic_draw(ctx, cell_layer, "Message Dialog", NULL, NULL);
      break;
    case 3:
      menu_cell_basic_draw(ctx, cell_layer, "List Message", NULL, NULL);
      break;
    case 4:
      menu_cell_basic_draw(ctx, cell_layer, "Radio Button", NULL, NULL);
      break;
    case 5:
      menu_cell_basic_draw(ctx, cell_layer, "PIN Entry", NULL, NULL);
      break;
    case 6:
      menu_cell_basic_draw(ctx, cell_layer, "Text Animation", NULL, NULL);
      break;
    case 7:
      menu_cell_basic_draw(ctx, cell_layer, "Progress Bar", NULL, NULL);
      break;
    case 8:
      menu_cell_basic_draw(ctx, cell_layer, "Progress Layer", NULL, NULL);
      break;
    case 9:
      menu_cell_basic_draw(ctx, cell_layer, "App Config Prompt", NULL, NULL);
      break;
    default:
      break;
  }*/
}

static int16_t get_cell_height_callback(struct MenuLayer *menu_layer, MenuIndex *cell_index, void *context) {
  return PBL_IF_ROUND_ELSE(
    menu_layer_is_index_selected(menu_layer, cell_index) ?
      MENU_CELL_ROUND_FOCUSED_SHORT_CELL_HEIGHT : MENU_CELL_ROUND_UNFOCUSED_TALL_CELL_HEIGHT,
    44); //CHECKBOX_WINDOW_CELL_HEIGHT);
}

/*static void pin_complete_callback(PIN pin, void *context) {
  APP_LOG(APP_LOG_LEVEL_INFO, "Pin was %d %d %d", pin.digits[0], pin.digits[1], pin.digits[2]);
  pin_window_pop((PinWindow*)context, true);
}*/

static void select_callback(struct MenuLayer *menu_layer, MenuIndex *cell_index, void *context) {
  if (s_menu_index == -1) {
    s_menu_index = cell_index->row;
  } else if (s_sub_menu_index == -1) {
    s_sub_menu_index = cell_index->row;
  }
  //s_menu_index = cell_index->row;
  menu_layer_reload_data(menu_layer);
  /*switch(cell_index->row) {
    case 0:
      checkbox_window_push();
      break;
    case 1:
      dialog_choice_window_push();
      break;
    case 2:
      dialog_message_window_push();
      break;
    case 3:
      list_message_window_push();
      break;
    case 4:
      radio_button_window_push();
      break;
    case 5: {
        PinWindow *pin_window = pin_window_create((PinWindowCallbacks) {
          .pin_complete = pin_complete_callback
        });
        pin_window_push(pin_window, true);
      }
      break;
    case 6:
      text_animation_window_push();
      break;
    case 7:
      progress_bar_window_push();
      break;
    case 8:
      progress_layer_window_push();
      break;
    case 9:
      dialog_config_window_push();
      break;
    default:
      break;
  }*/
}

// Define what you want to do when the back button is pressed
void back_button_handler(ClickRecognizerRef recognizer, void *context) {
  APP_LOG(APP_LOG_LEVEL_DEBUG, "back clicked");
  if (s_sub_menu_index > -1) {
    s_sub_menu_index = -1;
    menu_layer_reload_data(s_menu_layer);
  } else if (s_menu_index > -1) {
    s_menu_index = -1;
    menu_layer_reload_data(s_menu_layer);
  } else {
    // We are at the top-most feeling menu. We assume that the user want to
    // exit the app.
    window_stack_pop_all(true); // Pop all windows (this will exit the app)
  }
}

// We need to save a reference to the ClickConfigProvider originally set by the menu layer
ClickConfigProvider previous_ccp;

// This is the new ClickConfigProvider we will set, it just calls the old one and then subscribe
// for back button events.
void new_ccp(void *context) {
  APP_LOG(APP_LOG_LEVEL_DEBUG, "calling the new ccp");
  previous_ccp(context);
  window_single_click_subscribe(BUTTON_ID_BACK, back_button_handler);
  APP_LOG(APP_LOG_LEVEL_DEBUG, "done in the new ccp");
}

// Call this from your init function to do the hack
void force_back_button(Window *window, MenuLayer *menu_layer) {
  previous_ccp = window_get_click_config_provider(window);
  window_set_click_config_provider_with_context(window, new_ccp, menu_layer);
}

static void window_load(Window *window) {
  Layer *window_layer = window_get_root_layer(window);
  GRect bounds = layer_get_bounds(window_layer);

  s_menu_layer = menu_layer_create(bounds);
  menu_layer_set_click_config_onto_window(s_menu_layer, window);
  force_back_button(window, s_menu_layer);
#if defined(PBL_COLOR)
  menu_layer_set_normal_colors(s_menu_layer, GColorBlack, GColorWhite);
  menu_layer_set_highlight_colors(s_menu_layer, GColorRed, GColorWhite);
#endif
  menu_layer_set_callbacks(s_menu_layer, NULL, (MenuLayerCallbacks) {
      .get_num_rows = get_num_rows_callback,
      .draw_row = draw_row_callback,
      .get_cell_height = get_cell_height_callback,
      .select_click = select_callback,
  });
  layer_add_child(window_layer, menu_layer_get_layer(s_menu_layer));
}

static void window_unload(Window *window) {
  menu_layer_destroy(s_menu_layer);
}

static void init(void) {
	s_main_window = window_create();
  
  window_set_window_handlers(s_main_window, (WindowHandlers) {
      .load = window_load,
      .unload = window_unload,
  });
  window_stack_push(s_main_window, true);
	
	// App Logging!
	APP_LOG(APP_LOG_LEVEL_DEBUG, "Just pushed a window!");
}

static void deinit(void) {
	// Destroy the text layer
  //text_layer_destroy(s_text_layer);
	
	// Destroy the window
	window_destroy(s_main_window);
}

int main(void) {
	init();
	app_event_loop();
	deinit();
}
