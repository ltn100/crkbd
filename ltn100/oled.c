#ifdef OLED_ENABLE

#include "keymap.h"
#include "oled_space.h"
#include "oled_layer_ind.h"


oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        // Main
        return oled_layer_ind_init(rotation);
    } else {
        // Secondary
        return oled_space_init(rotation);
    }
}


bool oled_task_user(void) {
    if (is_keyboard_master()) {
        // Main
        oled_layer_ind_render();
    } else {
        // Secondary
        oled_space_render();
    }

    return false;
}

#endif  // OLED_ENABLE
