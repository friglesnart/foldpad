#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K00,                          \
	     K11,                     \
	          K22,                \
	               K33,           \
	                    K44,      \
	                         K55  \
) { \
	{ K00,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, K11,   KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, K22,   KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, K33,   KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, K44,   KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K55 }  \
}

#endif