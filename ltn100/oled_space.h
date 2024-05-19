/*
* Spaceship WPM screen from JBaguley
* https://github.com/JBaguley/qmk_firmware/blob/crkbd-retrograde-keymap/keyboards/crkbd/keymaps/retrograde/keymap.c
*
* Required in rules.mk:
*   WPM_ENABLE = yes
*   SRC += oled_space.c
*
* Required in config.h:
*   #define SPLIT_WPM_ENABLE  // To enable spaceship on split side
*/
#pragma once
#include QMK_KEYBOARD_H

oled_rotation_t oled_space_init(oled_rotation_t roatation);
void oled_space_render(void);
