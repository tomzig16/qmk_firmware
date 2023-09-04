#include "keyswapper.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (detected_host_os()) {
        case OS_MACOS:
        switch(keycode) {
            // Map windows ctrl to macos cmd
            case KC_LCTL:
                if(record->event.pressed) {
                    register_code(KC_LCMD);
                }
                else {
                    unregister_code(KC_LCMD);
                }
		        return false;
            case KC_RCTL:
                if(record->event.pressed) {
                    register_code(KC_RCMD);
                }
                else {
                    unregister_code(KC_RCMD);
                }
		        return false;
            // Map windows alt to macos option
            case KC_LALT:
                if(record->event.pressed) {
                    register_code(KC_LOPT);
                }
                else {
                    unregister_code(KC_LOPT);
                }
		        return false;
            case KC_RALT:
                if(record->event.pressed) {
                    register_code(KC_ROPT);
                }
                else {
                    unregister_code(KC_ROPT);
                }
		        return false;
            // Map windows key to macos ctrl
            case KC_LGUI:
                if(record->event.pressed) {
                    register_code(KC_LCTL);
                }
                else {
                    unregister_code(KC_LCTL);
                }
		        return false;
            case KC_RGUI:
                if(record->event.pressed) {
                    register_code(KC_RCTL);
                }
                else {
                    unregister_code(KC_RCTL);
                }
                return false;
        }
        return true
    
    default:
        return true
    }
    return true;
}
