# Software features

SPLIT_KEYBOARD      = yes
ENCODER_ENABLE      = yes 
OS_DETECTION_ENABLE = yes

# Files to compile
SRC += source.c
SRC += features/keyswapper.c
SRC += features/custom_key_handler.c

INTROSPECTION_KEYMAP_C = features/custom_key_handler.c