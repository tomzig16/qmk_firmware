#include QMK_KEYBOARD_H
#include "keyswapper.h"


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (detected_host_os()) {
        case OS_MACOS:
                if(!handle_keyswap_for_macos(keycode, record, )) {
                    // Returns based on the QMK standard - false if system has yet to handle (aka if we handled it)
                    return false;
                }
                return true; // Let QMK standard handle it
        default:
            return true;
    }
    return true;
}
