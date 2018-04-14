#include "kb.h"

enum custom_keycodes {
	KC_screenshot = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		MO(1), 
		MO(2), 
		KC_VOLU, 
		KC_VOLD, 
		KC_MPLY, 
		KC_MSTP),

	KEYMAP(
		KC_TRNS, 
		RGB_TOG, 
		RGB_HUI, 
		RGB_HUD, 
		RGB_SAI, 
		RGB_SAD),

	KEYMAP(
		RESET, 
		KC_TRNS, 
		RGB_VAI, 
		RGB_VAD, 
		KC_PGUP, 
		KC_PGDN),

	KEYMAP(
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS),

	KEYMAP(
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS),

	KEYMAP(
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS),

	KEYMAP(
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS),

	KEYMAP(
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS),

	KEYMAP(
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS),

	KEYMAP(
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS),

	KEYMAP(
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS),

	KEYMAP(
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS),

	KEYMAP(
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS),

	KEYMAP(
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS),

	KEYMAP(
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS),

	KEYMAP(
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS)

};

void press_key(uint16_t key) {
	register_code(key);
	unregister_code(key);
};

void press_two_keys(uint16_t key1, uint16_t key2) {
	register_code(key1);
	register_code(key2);
	unregister_code(key2);
	unregister_code(key1);
 };
  
  void press_three_keys(uint16_t key1, uint16_t key2, uint16_t key3) {
	register_code(key1);
	register_code(key2);
	register_code(key3);
	unregister_code(key3);
	unregister_code(key2);
	unregister_code(key1);
 };

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case KC_screenshot:
			if(record->event.pressed) {
				press_three_keys(KC_RCTL, KC_RALT, KC_PSCR);
			}
			return false;
			break;
			
	}		
	return true;
};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}