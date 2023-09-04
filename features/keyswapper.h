#include QMK_KEYBOARD_H

#ifdef OS_DETECTION_ENABLE
    #include "os_detection.h"
#endif

bool handle_keyswap_for_macos(uint16_t keycode, keyrecord_t *record);

