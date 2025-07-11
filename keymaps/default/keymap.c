#include QMK_KEYBOARD_H

enum custom_keycodes {
    SPOTIFY,
    DISCORD,
    NOTION,
    PAUSE,
    NEXT_TRACK,
    PREV_TRACK,
    SLEEP
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_macropad(
        SPOTIFY,   DISCORD,   NOTION,   SLEEP,
        KC_7,   KC_8,   KC_9,   KC_KP_PLUS,
        KC_4,   KC_5,   KC_6,   KC_KP_PLUS,
        KC_1,   KC_2,   KC_3,   KC_KP_PLUS,
        PAUSE,   NEXT_TRACK,   PREV_TRACK,  KC_KP_ENTER
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case SPOTIFY:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                tap_code(KC_R);
                unregister_code(KC_LGUI);
                wait_ms(300);
                SEND_STRING("spotify" SS_TAP(X_ENTER));
            }
            break;
        
        case DISCORD:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                tap_code(KC_R);
                unregister_code(KC_LGUI);
                wait_ms(300);
                SEND_STRING("C:\\Users\\niket\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Discord Inc\\Discord.lnk" SS_TAP(X_ENTER));
            }

            break;

        case NOTION:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                tap_code(KC_R);
                unregister_code(KC_LGUI);
                wait_ms(300);
                SEND_STRING("C:\\Users\\niket\\AppData\\Local\\Programs\\Notion\\Notion.exe" SS_TAP(X_ENTER));
            }
            break;

        case PAUSE:
            if (record->event.pressed) {
                tap_code(KC_MEDIA_PLAY_PAUSE);
            }
            break;

        case NEXT_TRACK:
            if (record->event.pressed) {
                tap_code(KC_MEDIA_NEXT_TRACK);
            }
            break;

        case PREV_TRACK:
            if (record->event.pressed) {
                tap_code(KC_MEDIA_PREV_TRACK);
            }
            break;

        case SLEEP:
            if (record->event.pressed) {
                tap_code(KC_SYSTEM_SLEEP);
            }
            break;
    }
    return true;
};
