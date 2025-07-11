# Productivity 20-Key Macropad ⌨️

A custom 4x5 macropad powered by a Pro Micro (ATMega32U4) running QMK firmware.  
Designed for media control, productivity shortcuts, and application macros — including launching apps like Spotify, Discord, and Notion.

---

## 📸 Preview

![Macropad Build]() <!-- Need to get a photo -->

---

## 🛠 Features

- 20 programmable keys (4 columns × 5 rows)
- QMK firmware powered
- Custom keymap with:
  - Media controls (Play/Pause, Next/Previous Track, Volume)
  - App launch macros (Spotify, Discord, Notion)
  - Copy, Paste, Undo, Save, Alt+Tab, etc.
- Layer support for extended functionality
- Built with `keyboard.json` + `keymap.c` (QMK 0.3.3+ structure)

---

## 🧱 Hardware

- **Microcontroller:** Pro Micro (ATMega32U4 clone - Keyes)
- **Switches:** Any mechanical switch (e.g., Gateron, Cherry MX)
- **Diode Direction:** COL2ROW
- **Custom hand-wired PCB layout**

---

## 🧩 Firmware & Layout

### Layout Definition
Found in `keyboard.json` (QMK new-format compatible).

### Keymap
Defined in `keymap.c` using `LAYOUT_macropad`.

### Example Layer:
```c
KC_NUM,  KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS,
KC_7,    KC_8,        KC_9,           KC_KP_PLUS,
KC_4,    KC_5,        KC_6,           KC_KP_PLUS,
KC_1,    KC_2,        KC_3,           KC_KP_PLUS,
KC_0,    KC_0,        KC_DELETE,      KC_KP_ENTER
