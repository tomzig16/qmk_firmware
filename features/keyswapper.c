#include "keyswapper.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    bool wasNewKeySet = false;
    if(detected_host_os() == OS_MACOS) {
        switch (keycode)
        {
            // https://docs.qmk.fm/#/keycodes_basic?id=commands

            // Map windows ctrl to macos cmd
            case KC_LCTL:
                if(record->event.pressed) {
                    register_code(KC_LCMD);
                }
                else {
                    unregister_code(KC_LCMD);
                }
                wasNewKeySet = true;
		break;
            case KC_RCTL:
                if(record->event.pressed) {
                    register_code(KC_RCMD);
                }
                else {
                    unregister_code(KC_RCMD);
                }
                wasNewKeySet = true;
		break;
            // Map windows alt to macos option
            case KC_LALT:
                if(record->event.pressed) {
                    register_code(KC_LOPT);
                }
                else {
                    unregister_code(KC_LOPT);
                }
                wasNewKeySet = true;
		break;
            case KC_RALT:
                if(record->event.pressed) {
                    register_code(KC_ROPT);
                }
                else {
                    unregister_code(KC_ROPT);
                }
                wasNewKeySet = true;
		break;
                // Map windows key to macos ctrl
            case KC_LGUI:
                if(record->event.pressed) {
                    register_code(KC_LCTL);
                }
                else {
                    unregister_code(KC_LCTL);
                }
                wasNewKeySet = true;
		break;
            case KC_RGUI:
                if(record->event.pressed) {
                    register_code(KC_RCTL);
                }
                else {
                    unregister_code(KC_RCTL);
                }
                wasNewKeySet = true;
		break;
            default:
                return false;
        }
    }
    return wasNewKeySet;
}
