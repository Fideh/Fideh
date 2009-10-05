static const char *keywords_constant[] = {
	"B_ABOUT_REQUESTED",
	"B_ACQUIRE_OVERLAY_LOCK",
	"B_ANY_DELIVERY",
	"B_ANY_SOURCE",
	"B_APP_ACTIVATED",
	"B_ARCHIVED_OBJECT",
	"B_ARGV_ONLY",
	"B_ARGV_RECEIVED",
	"B_BACKGROUND_APP",
	"B_CANCEL",
	"B_CLIPBOARD_CHANGED",
	"B_CLOSE_REQUESTED",
	"B_COMMAND_KIND",
	"B_CONTROL_INVOKED",
	"B_CONTROL_INVOKED.",
	"B_CONTROL_MODIFIED",
	"B_COPY",
	"B_COPY_TARGET",
	"B_COUNT_PROPERTIES",
	"B_CREATE_PROPERTY",
	"B_CUT",
	"B_DELETE_PROPERTY",
	"B_DIRECT_SPECIFIER",
	"B_DISPATCH_MESSAGE",
	"B_DROPPED_DELIVERY",
	"B_ENDORSABLE",
	"B_EXCLUSIVE_LAUNCH",
	"B_EXECUTE_PROPERTY",
	"B_FIELD_NAME_LENGTH",
	"B_GET_PROPERTY",
	"B_GET_SUPPORTED_SUITES",
	"B_HAND_CURSOR",
	"B_ID_SPECIFIER",
	"B_INDEX_SPECIFIER",
	"B_INFINITE_TIMEOUT",
	"B_INPUT_DEVICES_CHANGED",
	"B_INPUT_METHOD_EVENT",
	"B_I_BEAM_CURSOR",
	"B_KEY_DOWN",
	"B_KEY_UP",
	"B_LAUNCH_MASK",
	"B_LINK_TARGET",
	"B_LOCAL_SOURCE",
	"B_LOOPER_PORT_DEFAULT_CAPACITY",
	"B_MESSAGE_NOT_UNDERSTOOD",
	"B_MIME_DATA",
	"B_MINIMIZE",
	"B_MODIFIERS_CHANGED",
	"B_MOUSE_DOWN",
	"B_MOUSE_ENTER_EXIT",
	"B_MOUSE_MOVED",
	"B_MOUSE_UP",
	"B_MOUSE_WHEEL_CHANGED",
	"B_MOVE_TARGET",
	"B_MULTIPLE_LAUNCH",
	"B_NAME_SPECIFIER",
	"B_NODE_MONITOR",
	"B_NORMAL_PRIORITY",
	"B_NO_REPLY",
	"B_NO_SPECIFIER",
	"B_OBSERVER_NOTICE_CHANGE",
	"B_OBSERVER_OBSERVE_ALL",
	"B_OBSERVE_ORIGINAL_WHAT",
	"B_OBSERVE_WHAT_CHANGE",
	"B_OPEN_IN_WORKSPACE",
	"B_PASTE",
	"B_PRINTER_CHANGED",
	"B_PROGRAMMED_DELIVERY",
	"B_PROPERTY_INFO_TYPE",
	"B_PROPERTY_NAME_LENGTH",
	"B_PULSE",
	"B_QUERY_UPDATE",
	"B_QUIT_REQUESTED",
	"B_RANGE_SPECIFIER",
	"B_READY_TO_RUN",
	"B_REFS_RECEIVED",
	"B_RELEASE_OVERLAY_LOCK",
	"B_REMOTE_SOURCE",
	"B_REPLY",
	"B_REQUEST_ACTIVATED",
	"B_REQUEST_LAUNCHED",
	"B_REQUEST_QUIT",
	"B_RESET_STATUS_BAR",
	"B_REVERSE_INDEX_SPECIFIER",
	"B_REVERSE_RANGE_SPECIFIER",
	"B_SAVE_REQUESTED",
	"B_SCREEN_CHANGED",
	"B_SELECT_ALL",
	"B_SET_PROPERTY",
	"B_SILENT_RELAUNCH",
	"B_SIMPLE_DATA",
	"B_SINGLE_LAUNCH",
	"B_SKIP_MESSAGE",
	"B_SOME_APP_ACTIVATED",
	"B_SOME_APP_LAUNCHED",
	"B_SOME_APP_QUIT",
	"B_SPECIFIERS_END",
	"B_TRASH_TARGET",
	"B_TYPE_CODE_KIND",
	"B_UNDO",
	"B_UNMAPPED_KEY_DOWN",
	"B_UNMAPPED_KEY_UP",
	"B_UPDATE_STATUS_BAR",
	"B_VALUE_CHANGED",
	"B_VIEW_MOVED",
	"B_VIEW_RESIZED",
	"B_WINDOW_ACTIVATED",
	"B_WINDOW_MOVED",
	"B_WINDOW_MOVE_BY",
	"B_WINDOW_MOVE_TO",
	"B_WINDOW_RESIZED",
	"B_WORKSPACES_CHANGED",
	"B_WORKSPACE_ACTIVATED",
	"B_ZOOM",
	"B_BEOS_VERSION",
	"B_BUFFER_MOVED",
	"B_BUFFER_RESET",
	"B_BUFFER_RESIZED",
	"B_CLIPPING_MODIFIED",
	"B_CURRENT_WORKSPACE",
	"B_DIRECT_MODE_MASK",
	"B_DIRECT_MODIFY",
	"B_DIRECT_START",
	"B_DIRECT_STOP",
	"B_DRIVER_CHANGED",
	"B_ENABLE_DEBUGGER",
	"B_ENABLE_VIEW_DRAWING",
	"B_GS_ALREADY_COMMITTED",
	"B_GS_BAD_HANDLE",
	"B_GS_CD_THROUGH_GAIN",
	"B_GS_CUR_API_VERSION",
	"B_GS_F",
	"B_GS_FIRST_PRIVATE_ATTRIBUTE",
	"B_GS_FIRST_USER_ATTRIBUTE",
	"B_GS_GAIN",
	"B_GS_INVALID_SOUND",
	"B_GS_LOOPING",
	"B_GS_MAIN_GAIN",
	"B_GS_MAIN_SOUND",
	"B_GS_MIN_API_VERSION",
	"B_GS_NO_ATTRIBUTE",
	"B_GS_NO_HARDWARE",
	"B_GS_NO_SOUNDS",
	"B_GS_PAN",
	"B_GS_READ_ONLY_VALUE",
	"B_GS_S16",
	"B_GS_S32",
	"B_GS_SAMPLING_RATE",
	"B_GS_U8",
	"B_MODE_CHANGED",
	"B_NOT_PAUSED",
	"B_PAUSED",
	"B_PAUSE_IN_PROGRESS",
	"B_15_BIT_1024x768",
	"B_15_BIT_1152x900",
	"B_15_BIT_1280x1024",
	"B_15_BIT_1600x1200",
	"B_15_BIT_640x480",
	"B_15_BIT_800x600",
	"B_16_BIT_1024x768",
	"B_16_BIT_1152x900",
	"B_16_BIT_1280x1024",
	"B_16_BIT_1600x1200",
	"B_16_BIT_640x480",
	"B_16_BIT_800x600",
	"B_32_BIT_1024x768",
	"B_32_BIT_1152x900",
	"B_32_BIT_1280x1024",
	"B_32_BIT_1600x1200",
	"B_32_BIT_640x480",
	"B_32_BIT_800x600",
	"B_8_BIT_1024x768",
	"B_8_BIT_1152x900",
	"B_8_BIT_1280x1024",
	"B_8_BIT_1600x1200",
	"B_8_BIT_640x400",
	"B_8_BIT_640x480",
	"B_8_BIT_800x600",
	"B_ABORT",
	"B_ALIGN_BOTTOM",
	"B_ALIGN_CENTER",
	"B_ALIGN_LEFT",
	"B_ALIGN_MIDDLE",
	"B_ALIGN_NO_VERTICAL",
	"B_ALIGN_RIGHT",
	"B_ALIGN_TOP",
	"B_ALL_WORKSPACES",
	"B_ALPHABETIC_PRESENTATION_FORMS_BLOCK",
	"B_ALPHA_COMPOSITE",
	"B_ALPHA_OVERLAY",
	"B_ANY_BYTES_PER_ROW",
	"B_APP_CACHE_SETTING",
	"B_ARABIC_EXTENDED_BLOCK",
	"B_ARABIC_PRESENTATION_FORMS_A_BLOCK",
	"B_ARABIC_PRESENTATION_FORMS_B_BLOCK",
	"B_ARMENIAN_BLOCK",
	"B_ARROWS_BLOCK",
	"B_ASYNCHRONOUS_CONTROLS",
	"B_AVOID_FOCUS",
	"B_AVOID_FRONT",
	"B_BACKSPACE",
	"B_BASIC_ARABIC_BLOCK",
	"B_BASIC_GEORGIAN_BLOCK",
	"B_BASIC_GREEK_BLOCK",
	"B_BASIC_HEBREW_BLOCK",
	"B_BASIC_LATIN_BLOCK",
	"B_BENGALI_BLOCK",
	"B_BEVEL_JOIN",
	"B_BIG_RGB_16_BIT",
	"B_BIG_RGB_32_BIT",
	"B_BITMAPS_SUPPORT_ATTACHED_VIEWS",
	"B_BITMAP_ACCEPTS_VIEWS",
	"B_BITMAP_CLEAR_TO_WHITE",
	"B_BITMAP_IS_AREA",
	"B_BITMAP_IS_CONTIGUOUS",
	"B_BITMAP_IS_LOCKED",
	"B_BITMAP_IS_OFFSCREEN",
	"B_BITMAP_RESERVE_OVERLAY_CHANNEL",
	"B_BITMAP_SPACING",
	"B_BITMAP_WILL_OVERLAY",
	"B_BLOCK_ELEMENTS_BLOCK",
	"B_BLOCK_THUMB",
	"B_BOLD_FACE",
	"B_BOPOMOFO_BLOCK",
	"B_BORDERED_WINDOW",
	"B_BORDERED_WINDOW_LOOK",
	"B_BORDER_CONTENTS",
	"B_BORDER_EACH_ITEM",
	"B_BORDER_FRAME",
	"B_BOX_DRAWING_BLOCK",
	"B_BUFFER_BOTTOM_TO_TOP",
	"B_BUFFER_NONINTERLEAVED",
	"B_BUFFER_TOP_TO_BOTTOM",
	"B_BUTT_CAP",
	"B_BUTT_JOIN",
	"B_BW_PRINTER",
	"B_BYTE_ALIGNMENT",
	"B_CAPS_LOCK",
	"B_CAPS_SHIFT_TABLE",
	"B_CAPS_TABLE",
	"B_CELLS_16x16",
	"B_CELLS_32x8",
	"B_CELLS_4x64",
	"B_CELLS_64x4",
	"B_CELLS_8x32",
	"B_CHAR_SPACING",
	"B_CJK_COMPATIBILITY_BLOCK",
	"B_CJK_COMPATIBILITY_FORMS_BLOCK",
	"B_CJK_COMPATIBILITY_IDEOGRAPHS_BLOCK",
	"B_CJK_MISCELLANEOUS_BLOCK",
	"B_CJK_SYMBOLS_AND_PUNCTUATION_BLOCK",
	"B_CJK_UNIFIED_IDEOGRAPHS_BLOCK",
	"B_CMAP8",
	"B_CMY24",
	"B_CMY32",
	"B_CMYA32",
	"B_CMYK32",
	"B_COLOR_8_BIT",
	"B_COLOR_PRINTER",
	"B_COMBINING_DIACRITICAL_MARKS_BLOCK",
	"B_COMBINING_HALF_MARKS_BLOCK",
	"B_COMBINING_MARKS_FOR_SYMBOLS_BLOCK",
	"B_COMMAND_KEY",
	"B_CONSTANT_ALPHA",
	"B_CONTROL_INVOKED",
	"B_CONTROL_KEY",
	"B_CONTROL_OFF",
	"B_CONTROL_ON",
	"B_CONTROL_PICTURES_BLOCK",
	"B_CONTROL_TABLE",
	"B_CURRENCY_SYMBOLS_BLOCK",
	"B_CURRENT_WORKSPACE",
	"B_CYRILLIC_BLOCK",
	"B_DARKEN_1_TINT",
	"B_DARKEN_2_TINT",
	"B_DARKEN_3_TINT",
	"B_DARKEN_4_TINT",
	"B_DARKEN_MAX_TINT",
	"B_DEFAULT_CACHE_SETTING",
	"B_DEFAULT_MITER_LIMIT",
	"B_DELETE",
	"B_DESKBAR_BOTTOM",
	"B_DESKBAR_LEFT_BOTTOM",
	"B_DESKBAR_LEFT_TOP",
	"B_DESKBAR_RIGHT_BOTTOM",
	"B_DESKBAR_RIGHT_TOP",
	"B_DESKBAR_TOP",
	"B_DESKTOP_COLOR",
	"B_DEVANAGARI_BLOCK",
	"B_DINGBATS_BLOCK",
	"B_DISABLED_LABEL_TINT",
	"B_DISABLED_MARK_TINT",
	"B_DISABLE_ANTIALIASING",
	"B_DOCUMENT_WINDOW",
	"B_DOCUMENT_WINDOW_LOOK",
	"B_DOWN_ARROW",
	"B_DRAW_ON_CHILDREN",
	"B_EMPTY_ALERT",
	"B_ENCLOSED_ALPHANUMERICS_BLOCK",
	"B_ENCLOSED_CJK_LETTERS_AND_MONTHS_BLOCK",
	"B_END",
	"B_ENTER",
	"B_ENTERED_VIEW",
	"B_ESCAPE",
	"B_EVEN_SPACING",
	"B_EXITED_VIEW",
	"B_F10_KEY",
	"B_F11_KEY",
	"B_F12_KEY",
	"B_F1_KEY",
	"B_F2_KEY",
	"B_F3_KEY",
	"B_F4_KEY",
	"B_F5_KEY",
	"B_F6_KEY",
	"B_F7_KEY",
	"B_F8_KEY",
	"B_F9_KEY",
	"B_FAKE_DEVICE",
	"B_FAKE_DEVICE--it",
	"B_FANCY_BORDER",
	"B_FIXED_SPACING",
	"B_FLOATING_ALL_WINDOW_FEEL",
	"B_FLOATING_APP_WINDOW_FEEL",
	"B_FLOATING_SUBSET_WINDOW_FEEL",
	"B_FLOATING_WINDOW",
	"B_FLOATING_WINDOW_LOOK",
	"B_FOCUS_FOLLOWS_MOUSE",
	"B_FOLLOW_ALL",
	"B_FOLLOW_ALL_SIDES",
	"B_FOLLOW_BOTTOM",
	"B_FOLLOW_H_CENTER",
	"B_FOLLOW_LEFT",
	"B_FOLLOW_LEFT_RIGHT",
	"B_FOLLOW_LEFT|B_FOLLOW_TOP",
	"B_FOLLOW_NONE",
	"B_FOLLOW_RIGHT",
	"B_FOLLOW_TOP",
	"B_FOLLOW_TOP_BOTTOM",
	"B_FOLLOW_V_CENTER",
	"B_FONT_ALL",
	"B_FONT_ENCODING",
	"B_FONT_FACE",
	"B_FONT_FAMILY_AND_STYLE",
	"B_FONT_FAMILY_LENGTH",
	"B_FONT_FLAGS",
	"B_FONT_LEFT_TO_RIGHT",
	"B_FONT_RIGHT_TO_LEFT",
	"B_FONT_ROTATION",
	"B_FONT_SHEAR",
	"B_FONT_SIZE",
	"B_FONT_SPACING",
	"B_FONT_STYLE_LENGTH",
	"B_FORCE_ANTIALIASING",
	"B_FRAME_EVENTS",
	"B_FULL_UPDATE_ON_RESIZE",
	"B_FUNCTION_KEY",
	"B_GENERAL_PUNCTUATION_BLOCK",
	"B_GEOMETRIC_SHAPES_BLOCK",
	"B_GEORGIAN_EXTENDED_BLOCK",
	"B_GRAY1",
	"B_GRAY8",
	"B_GRAYSCALE_8_BIT",
	"B_GREEK_EXTENDED_BLOCK",
	"B_GREEK_SYMBOLS_AND_COPTIC_BLOCK",
	"B_GUJARATI_BLOCK",
	"B_GURMUKHI_BLOCK",
	"B_HALFWIDTH_AND_FULLWIDTH_FORMS_BLOCK",
	"B_HANGUL_BLOCK",
	"B_HANGUL_COMPATIBILITY_JAMO_BLOCK",
	"B_HANGUL_JAMO_BLOCK",
	"B_HASH_MARKS_BOTH",
	"B_HASH_MARKS_BOTTOM",
	"B_HASH_MARKS_LEFT",
	"B_HASH_MARKS_NONE",
	"B_HASH_MARKS_RIGHT",
	"B_HASH_MARKS_TOP",
	"B_HAS_TUNED_FONT",
	"B_HEBREW_EXTENDED_BLOCK",
	"B_HIGHLIGHT_BACKGROUND_TINT",
	"B_HIGH_SURROGATES_BLOCK",
	"B_HIRAGANA_BLOCK",
	"B_HLS24",
	"B_HLS32",
	"B_HLSA32",
	"B_HOME",
	"B_HORIZONTAL",
	"B_HSI24",
	"B_HSI32",
	"B_HSIA32",
	"B_HSV24",
	"B_HSV32",
	"B_HSVA32",
	"B_H_SCROLL_BAR_HEIGHT",
	"B_IDEA_ALERT",
	"B_INFO_ALERT",
	"B_INITIAL_ADD",
	"B_INPUT_DEVICES_CHANGED",
	"B_INPUT_DEVICE_ADDED",
	"B_INPUT_DEVICE_REMOVED",
	"B_INPUT_DEVICE_STARTED",
	"B_INPUT_DEVICE_STOPPED",
	"B_INPUT_METHOD_AWARE",
	"B_INPUT_METHOD_CHANGED",
	"B_INPUT_METHOD_LOCATION_REQUEST",
	"B_INPUT_METHOD_STARTED",
	"B_INPUT_METHOD_STOPPED",
	"B_INSERT",
	"B_INSIDE_VIEW",
	"B_INSTANT_WARP_MOUSE",
	"B_IPA_EXTENSIONS_BLOCK",
	"B_ISO_8859_1",
	"B_ISO_8859_10",
	"B_ISO_8859_2",
	"B_ISO_8859_3",
	"B_ISO_8859_4",
	"B_ISO_8859_5",
	"B_ISO_8859_6",
	"B_ISO_8859_7",
	"B_ISO_8859_8",
	"B_ISO_8859_9",
	"B_IS_FIXED",
	"B_ITALIC_FACE",
	"B_ITEMS_IN_COLUMN",
	"B_ITEMS_IN_MATRIX",
	"B_ITEMS_IN_ROW",
	"B_KANNADA_BLOCK",
	"B_KATAKANA_BLOCK",
	"B_KEYBOARD_DEVICE",
	"B_KEYBOARD_EVENTS",
	"B_KEYBOARD_NAVIGATION_COLOR",
	"B_LAB24",
	"B_LAB32",
	"B_LABA32",
	"B_LAO_BLOCK",
	"B_LATIN1_SUPPLEMENT_BLOCK",
	"B_LATIN_EXTENDED_ADDITIONAL_BLOCK",
	"B_LATIN_EXTENDED_A_BLOCK",
	"B_LATIN_EXTENDED_B_BLOCK",
	"B_LEFT_ARROW",
	"B_LEFT_COMMAND_KEY",
	"B_LEFT_CONTROL_KEY",
	"B_LEFT_OPTION_KEY",
	"B_LEFT_SHIFT_KEY",
	"B_LETTERLIKE_SYMBOLS_BLOCK",
	"B_LIGHTEN_1_TINT",
	"B_LIGHTEN_2_TINT",
	"B_LIGHTEN_MAX_TINT",
	"B_LOCK_WINDOW_FOCUS",
	"B_LOW_SURROGATES_BLOCK",
	"B_MACINTOSH_ROMAN",
	"B_MAIN_SCREEN_ID",
	"B_MALAYALAM_BLOCK",
	"B_MATHEMATICAL_OPERATORS_BLOCK",
	"B_MENU_BACKGROUND_COLOR",
	"B_MENU_ITEM_TEXT_COLOR",
	"B_MENU_KEY",
	"B_MENU_SELECTED_ITEM_TEXT_COLOR",
	"B_MENU_SELECTION_BACKGROUND_COLOR",
	"B_MISCELLANEOUS_SYMBOLS_BLOCK",
	"B_MISCELLANEOUS_TECHNICAL_BLOCK",
	"B_MITER_JOIN",
	"B_MIXED_COLORS",
	"B_MODAL_ALL_WINDOW_FEEL",
	"B_MODAL_APP_WINDOW_FEEL",
	"B_MODAL_SUBSET_WINDOW_FEEL",
	"B_MODAL_WINDOW",
	"B_MODAL_WINDOW_LOOK",
	"B_MONOCHROME_1_BIT",
	"B_MOVE_OP",
	"B_MULTIPLE_SELECTION_LIST",
	"B_NAVIGABLE",
	"B_NAVIGABLE_JUMP",
	"B_NEGATIVE_FACE",
	"B_NORMAL_MOUSE",
	"B_NORMAL_TABLE",
	"B_NORMAL_WINDOW_FEEL",
	"B_NOT_ANCHORED_ON_ACTIVATE",
	"B_NOT_CLOSABLE",
	"B_NOT_H_RESIZABLE",
	"B_NOT_MINIMIZABLE",
	"B_NOT_MOVABLE",
	"B_NOT_RESIZABLE",
	"B_NOT_V_RESIZABLE",
	"B_NOT_ZOOMABLE",
	"B_NO_BORDER",
	"B_NO_BORDER_WINDOW_LOOK",
	"B_NO_COLOR_SPACE",
	"B_NO_OP",
	"B_NO_POINTER_HISTORY",
	"B_NO_TINT",
	"B_NO_WORKSPACE_ACTIVATION",
	"B_NUMBER_FORMS_BLOCK",
	"B_NUM_LOCK",
	"B_OFFSET_SPACING",
	"B_ONE_STATE_BUTTON",
	"B_OPTICAL_CHARACTER_RECOGNITION_BLOCK",
	"B_OPTION_CAPS_SHIFT_TABLE",
	"B_OPTION_CAPS_TABLE",
	"B_OPTION_CONTROL_VALUE",
	"B_OPTION_KEY",
	"B_OPTION_SHIFT_TABLE",
	"B_OPTION_TABLE",
	"B_OP_ADD",
	"B_OP_ALPHA",
	"B_OP_BLEND",
	"B_OP_COPY",
	"B_OP_ERASE",
	"B_OP_INVERT",
	"B_OP_MAX",
	"B_OP_MIN",
	"B_OP_OVER",
	"B_OP_SELECT",
	"B_OP_SUBTRACT",
	"B_ORIGIN",
	"B_ORIYA_BLOCK",
	"B_OUTLINED_FACE",
	"B_OUTLINE_RESIZE",
	"B_OUTSIDE_VIEW",
	"B_OVERLAY_FILTER_HORIZONTAL",
	"B_OVERLAY_FILTER_VERTICAL",
	"B_OVERLAY_MIRROR",
	"B_OVERLAY_TRANSFER_CHANNEL",
	"B_PAGE_DOWN",
	"B_PAGE_UP",
	"B_PANEL_BACKGROUND_COLOR",
	"B_PAUSE_KEY",
	"B_PIXEL_ALIGNMENT",
	"B_PIXEL_ALPHA",
	"B_PLAIN_BORDER",
	"B_POINTER_EVENTS",
	"B_POINTING_DEVICE",
	"B_POSTSCRIPT_TYPE1_WINDOWS",
	"B_PRIMARY_MOUSE_BUTTON",
	"B_PRINTING_FONT_CACHE",
	"B_PRINTING_METRIC",
	"B_PRINT_KEY",
	"B_PRIVATE_USE_AREA_BLOCK",
	"B_PROCESSING",
	"B_PULSE_NEEDED",
	"B_QUIT_ON_WINDOW_CLOSE",
	"B_REGULAR_FACE",
	"B_REPLACE_OP",
	"B_RETURN",
	"B_RGB15",
	"B_RGB15_BIG",
	"B_RGB15_LITTLE",
	"B_RGB16",
	"B_RGB16_BIG",
	"B_RGB16_LITTLE",
	"B_RGB24",
	"B_RGB24_BIG",
	"B_RGB24_LITTLE",
	"B_RGB32",
	"B_RGB32_BIG",
	"B_RGB32_LITTLE",
	"B_RGBA15",
	"B_RGBA15_BIG",
	"B_RGBA15_LITTLE",
	"B_RGBA32",
	"B_RGBA32_BIG",
	"B_RGBA32_LITTLE",
	"B_RGB_16_BIT",
	"B_RGB_32_BIT",
	"B_RIGHT_ARROW",
	"B_RIGHT_COMMAND_KEY",
	"B_RIGHT_CONTROL_KEY",
	"B_RIGHT_OPTION_KEY",
	"B_RIGHT_SHIFT_KEY",
	"B_ROUND_CAP",
	"B_ROUND_JOIN",
	"B_SCREEN_FONT_CACHE",
	"B_SCREEN_METRIC",
	"B_SCROLL_KEY",
	"B_SCROLL_LOCK",
	"B_SECONDARY_MOUSE_BUTTON",
	"B_SHIFT_KEY",
	"B_SHIFT_TABLE",
	"B_SINGLE_SELECTION_LIST",
	"B_SMALL_FORM_VARIANTS_BLOCK",
	"B_SOLID_HIGH",
	"B_SOLID_LOW",
	"B_SPACE",
	"B_SPACING_MODIFIER_LETTERS_BLOCK",
	"B_SPECIALS_BLOCK",
	"B_SQUARE_CAP",
	"B_SQUARE_JOIN",
	"B_SQUARE_JOIN",
	"B_STOP_ALERT",
	"B_STRIKEOUT_FACE",
	"B_STRING_SPACING",
	"B_SUBPIXEL_PRECISE",
	"B_SUBSTITUTE",
	"B_SUPERSCRIPTS_AND_SUBSCRIPTS_BLOCK",
	"B_SUSPEND_VIEW_FOCUS",
	"B_SWAP_OP",
	"B_TAB",
	"B_TAB_ANY",
	"B_TAB_FIRST",
	"B_TAB_FRONT",
	"B_TAMIL_BLOCK",
	"B_TELUGU_BLOCK",
	"B_TERTIARY_MOUSE_BUTTON",
	"B_THAI_BLOCK",
	"B_TIBETAN_BLOCK",
	"B_TILE_BITMAP",
	"B_TILE_BITMAP_X",
	"B_TILE_BITMAP_Y",
	"B_TITLED_WINDOW",
	"B_TITLED_WINDOW_LOOK",
	"B_TRACK_RECT_CORNER",
	"B_TRACK_WHOLE_RECT",
	"B_TRANSPARENT_32_BIT",
	"B_TRANSPARENT_8_BIT",
	"B_TRANSPARENT_COLOR",
	"B_TRANSPARENT_MAGIC_CMAP8",
	"B_TRANSPARENT_MAGIC_RGBA15",
	"B_TRANSPARENT_MAGIC_RGBA15_BIG",
	"B_TRANSPARENT_MAGIC_RGBA32",
	"B_TRANSPARENT_MAGIC_RGBA32_BIG",
	"B_TRIANGLE_THUMB",
	"B_TRUETYPE_WINDOWS",
	"B_TRUNCATE_BEGINNING",
	"B_TRUNCATE_END",
	"B_TRUNCATE_MIDDLE",
	"B_TRUNCATE_SMART",
	"B_TWO_STATE_BUTTON",
	"B_UNDEFINED_DEVICE",
	"B_UNDERSCORE_FACE",
	"B_UNDO_CLEAR",
	"B_UNDO_CUT",
	"B_UNDO_DROP",
	"B_UNDO_PASTE",
	"B_UNDO_TYPING",
	"B_UNDO_UNAVAILABLE",
	"B_UNICODE_UTF8",
	"B_UNTYPED_WINDOW",
	"B_UP_ARROW",
	"B_UTF8_CLOSE_QUOTE",
	"B_UTF8_COPYRIGHT",
	"B_UTF8_ELLIPSIS",
	"B_UTF8_HIROSHI",
	"B_UTF8_OPEN_QUOTE",
	"B_UTF8_REGISTERED",
	"B_UTF8_SMILING_FACE",
	"B_UTF8_TRADEMARK",
	"B_UVL24",
	"B_UVL32",
	"B_UVLA32",
	"B_VERTICAL",
	"B_VIEWS_SUPPORT_DRAW_BITMAP",
	"B_V_SCROLL_BAR_WIDTH",
	"B_WARNING_ALERT",
	"B_WARP_MOUSE",
	"B_WIDTH_AS_USUAL",
	"B_WIDTH_FROM_LABEL",
	"B_WIDTH_FROM_WIDEST",
	"B_WILL_ACCEPT_FIRST_CLICK",
	"B_WILL_DRAW",
	"B_WINDOW_TAB_COLOR",
	"B_YCbCr411",
	"B_YCbCr420",
	"B_YCbCr422",
	"B_YCbCr444",
	"B_YUV12",
	"B_YUV411",
	"B_YUV420",
	"B_YUV422",
	"B_YUV444",
	"B_YUV9",
	"B_ABSOLUTE_TIMEOUT",
	"B_ACKNOWLEGE_IMAGE_CREATED",
	"B_ADD_ON_IMAGE",
	"B_ALIGNMENT_EXCEPTION",
	"B_ANY_ADDRESS",
	"B_ANY_KERNEL_ADDRESS",
	"B_APPLE_II_PLATFORM",
	"B_APP_IMAGE",
	"B_AT_CLONE_PLATFORM",
	"B_AUDIO_PLAYBACK",
	"B_AUDIO_RECORDING",
	"B_BASE_ADDRESS",
	"B_BEBOX_PLATFORM",
	"B_BESM_6_PLATFORM",
	"B_BOUNDS_CHECK_EXCEPTION",
	"B_BREAKPOINT_HIT",
	"B_CAN_INTERRUPT",
	"B_CHECK_PERMISSION",
	"B_CLEAR_BREAKPOINT",
	"B_CLEAR_WATCHPOINT",
	"B_CLONE_ADDRESS",
	"B_CONTIGUOUS",
	"B_CPU_ALPHA",
	"B_CPU_AMD_29K",
	"B_CPU_AMD_ATHLON_MODEL1",
	"B_CPU_AMD_K5_MODEL0",
	"B_CPU_AMD_K5_MODEL1",
	"B_CPU_AMD_K5_MODEL2",
	"B_CPU_AMD_K5_MODEL3",
	"B_CPU_AMD_K6_2",
	"B_CPU_AMD_K6_III",
	"B_CPU_AMD_K6_MODEL6",
	"B_CPU_AMD_K6_MODEL7",
	"B_CPU_AMD_K6_MODEL8",
	"B_CPU_AMD_K6_MODEL9",
	"B_CPU_AMD_X86",
	"B_CPU_ARM",
	"B_CPU_CYRIX_6x86MX",
	"B_CPU_CYRIX_GXm",
	"B_CPU_CYRIX_X86",
	"B_CPU_HPPA",
	"B_CPU_IDT_WINCHIP_2",
	"B_CPU_IDT_WINCHIP_C6",
	"B_CPU_IDT_X86",
	"B_CPU_INTEL_CELERON",
	"B_CPU_INTEL_PENTIUM",
	"B_CPU_INTEL_PENTIUM75",
	"B_CPU_INTEL_PENTIUM75_486_OVERDRIVE",
	"B_CPU_INTEL_PENTIUM_486_OVERDRIVE",
	"B_CPU_INTEL_PENTIUM_II",
	"B_CPU_INTEL_PENTIUM_III",
	"B_CPU_INTEL_PENTIUM_III_MODEL_8",
	"B_CPU_INTEL_PENTIUM_II_MODEL_3",
	"B_CPU_INTEL_PENTIUM_II_MODEL_5",
	"B_CPU_INTEL_PENTIUM_MMX",
	"B_CPU_INTEL_PENTIUM_MMX_MODEL_4",
	"B_CPU_INTEL_PENTIUM_MMX_MODEL_8",
	"B_CPU_INTEL_PENTIUM_PRO",
	"B_CPU_INTEL_X86",
	"B_CPU_M68K",
	"B_CPU_MC6502",
	"B_CPU_MIPS",
	"B_CPU_PPC_601",
	"B_CPU_PPC_603",
	"B_CPU_PPC_603e",
	"B_CPU_PPC_604",
	"B_CPU_PPC_604e",
	"B_CPU_PPC_686",
	"B_CPU_PPC_750",
	"B_CPU_RISE_X86",
	"B_CPU_RISE_mP6",
	"B_CPU_SH",
	"B_CPU_SPARC",
	"B_CPU_X86",
	"B_CPU_X86_VENDOR_MASK",
	"B_CPU_Z80",
	"B_CRAY_PLATFORM",
	"B_DATA_ACCESS_EXCEPTION",
	"B_DEBUGGER_CALL",
	"B_DEFAULT_MEDIA_PRIORITY",
	"B_DISPLAY_PRIORITY",
	"B_DIVIDE_ERROR",
	"B_DO_NOT_RESCHEDULE",
	"B_ELF_IMAGE_CREATED",
	"B_ELF_IMAGE_DELETED",
	"B_ENIAC_PLATFORM",
	"B_EXACT_ADDRESS",
	"B_FLOATING_POINT_EXCEPTION",
	"B_FLUSH_DCACHE",
	"B_FLUSH_ICACHE",
	"B_FS_HAS_ATTR",
	"B_FS_HAS_MIME",
	"B_FS_HAS_QUERY",
	"B_FS_IS_PERSISTENT",
	"B_FS_IS_READONLY",
	"B_FS_IS_REMOVABLE",
	"B_FS_IS_SHARED",
	"B_FULL_LOCK",
	"B_GENERAL_PROTECTION_FAULT",
	"B_GET_PROFILING_INFO",
	"B_GET_THREAD_DEBUG_INFO",
	"B_GET_THREAD_STACK_TOP",
	"B_GET_WHY_STOPPED",
	"B_HAL_PLATFORM",
	"B_HANDOFF_TO_OTHER_DEBUGGER",
	"B_INFINITE_TIMEOUT",
	"B_INIT_AFTER_FUNCTION_NAME",
	"B_INIT_BEFORE_FUNCTION_NAME",
	"B_INSTRUCTION_ACCESS_EXCEPTION",
	"B_INVALIDATE_DCACHE",
	"B_INVALIDATE_ICACHE",
	"B_INVALID_OPCODE_EXCEPTION",
	"B_LAZY_LOCK",
	"B_LIBRARY_IMAGE",
	"B_LISA_PLATFORM",
	"B_LIVE_3D_RENDERING",
	"B_LIVE_AUDIO_MANIPULATION",
	"B_LIVE_QUERY",
	"B_LIVE_VIDEO_MANIPULATION",
	"B_LOMEM",
	"B_LOW_PRIORITY",
	"B_MACHINE_CHECK_EXCEPTION",
	"B_MAC_PLATFORM",
	"B_MAX_CPU_COUNT",
	"B_MIDI_PROCESSING",
	"B_MK_61_PLATFORM",
	"B_NINTENDO_64_PLATFORM",
	"B_NMI",
	"B_NORMAL_PRIORITY",
	"B_NO_LOCK",
	"B_NUMBER_CRUNCHING",
	"B_OFFLINE_PROCESSING",
	"B_ONE_SHOT_ABSOLUTE_ALARM",
	"B_ONE_SHOT_RELATIVE_ALARM",
	"B_ORAC_1_PLATFORM",
	"B_OS_NAME_LENGTH",
	"B_OVERFLOW_EXCEPTION",
	"B_PAGE_SIZE",
	"B_PEF_IMAGE_CREATED",
	"B_PEF_IMAGE_DELETED",
	"B_PERIODIC_ALARM",
	"B_PROGRAM_EXCEPTION",
	"B_READ_AREA",
	"B_READ_MEMORY",
	"B_REAL_TIME_DISPLAY_PRIORITY",
	"B_REAL_TIME_PRIORITY",
	"B_RELATIVE_TIMEOUT",
	"B_RUN_THREAD",
	"B_SEGMENT_NOT_PRESENT",
	"B_SEGMENT_VIOLATION",
	"B_SET_BREAKPOINT",
	"B_SET_WATCHPOINT",
	"B_SNGLSTP",
	"B_STACK_FAULT",
	"B_START_PROFILER",
	"B_STATUS_RENDERING",
	"B_STEP_OUT_THREAD",
	"B_STEP_OVER_THREAD",
	"B_STEP_THREAD",
	"B_STOP_CHILD_THREADS",
	"B_STOP_NEW_THREADS",
	"B_STOP_ON_DEBUG",
	"B_STOP_PROFILER",
	"B_SYMBOL_TYPE_ANY",
	"B_SYMBOL_TYPE_DATA",
	"B_SYMBOL_TYPE_TEXT",
	"B_SYSCALL_HIT",
	"B_SYSCALL_POST",
	"B_SYSTEM_IMAGE",
	"B_SYSTEM_TEAM",
	"B_SYSTEM_TIMEBASE",
	"B_SYSTEM_TIMEBASE.",
	"B_TEAM_CREATED",
	"B_TEAM_DELETED",
	"B_TERM_AFTER_FUNCTION_NAME",
	"B_TERM_BEFORE_FUNCTION_NAME",
	"B_THREAD_ASLEEP",
	"B_THREAD_CREATED",
	"B_THREAD_DELETED",
	"B_THREAD_NOT_RUNNING",
	"B_THREAD_READY",
	"B_THREAD_RECEIVING",
	"B_THREAD_RUNNING1",
	"B_THREAD_STOPPED",
	"B_THREAD_SUSPENDED",
	"B_THREAD_WAITING",
	"B_TIMEOUT",
	"B_TIMEX_SINCLAIR_PLATFORM",
	"B_TI_994A_PLATFORM",
	"B_URGENT_DISPLAY_PRIORITY",
	"B_URGENT_PRIORITY",
	"B_USER_INPUT_HANDLING",
	"B_VIDEO_PLAYBACK",
	"B_VIDEO_RECORDING",
	"B_WATCHPOINT_HIT",
	"B_WRITE_AREA",
	"B_WRITE_MEMORY",
	"B_ADVANCED_PARAMETER",
	"B_AFTER_TIME",
	"B_AIFF_FILE",
	"B_ALWAYS",
	"B_ANY_ADDRESS",
	"B_ANY_EVENT",
	"B_ANY_QUALITY",
	"B_AT_TIME",
	"B_BALANCE",
	"B_BEFORE_TIME",
	"B_BEOS_VERSION",
	"B_BITRATE",
	"B_BUFFER_CONSUMER",
	"B_BUFFER_PRODUCER",
	"B_CHANNEL_BACK_CENTER",
	"B_CHANNEL_CENTER",
	"B_CHANNEL_FRONT_LEFT_CENTER",
	"B_CHANNEL_FRONT_RIGHT_CENTER",
	"B_CHANNEL_LEFT",
	"B_CHANNEL_REARLEFT",
	"B_CHANNEL_REARRIGHT",
	"B_CHANNEL_RIGHT",
	"B_CHANNEL_SIDE_LEFT",
	"B_CHANNEL_SIDE_RIGHT",
	"B_CHANNEL_SUB",
	"B_CHANNEL_TOP_BACK_CENTER",
	"B_CHANNEL_TOP_BACK_LEFT",
	"B_CHANNEL_TOP_BACK_RIGHT",
	"B_CHANNEL_TOP_CENTER",
	"B_CHANNEL_TOP_FRONT_CENTER",
	"B_CHANNEL_TOP_FRONT_LEFT",
	"B_CHANNEL_TOP_FRONT_RIGHT",
	"B_CLIP_SHORT_RUNS",
	"B_COLOR_SPACE",
	"B_COMPRESSION",
	"B_CONNECT_MUTED",
	"B_CONTROLLABLE",
	"B_CONTROL_BG",
	"B_CONTROL_FG",
	"B_CROSSFADE",
	"B_DATA_AVAILABLE",
	"B_DATA_NOT_AVAILABLE",
	"B_DATA_STATUS",
	"B_DONE",
	"B_EDIT_BG",
	"B_EDIT_FG",
	"B_ENABLE",
	"B_ENTITY_INTERFACE",
	"B_EQUALIZATION",
	"B_ERROR",
	"B_EXCLUSIVE",
	"B_EXPIRE_TIMER",
	"B_FILE_INTERFACE",
	"B_FLAVOR_IS_GLOBAL",
	"B_FLAVOR_IS_LOCAL",
	"B_FRAME_RATE",
	"B_FREQUENCY",
	"B_FULL_LOCK",
	"B_GAIN",
	"B_GENERAL_BG",
	"B_GENERAL_FG",
	"B_GENERIC",
	"B_GOP_SIZE",
	"B_HANDLE_BUFFER",
	"B_HARDWARE",
	"B_HIDDEN_PARAMETER",
	"B_HIGH_QUALITY",
	"B_HILITE_BG",
	"B_HILITE_FG",
	"B_INFINITE_TIMEOUT",
	"B_INPUT_MUX",
	"B_IN_DISTRESS",
	"B_LEVEL",
	"B_LOW_QUALITY",
	"B_MASTER_GAIN",
	"B_MATRIX_AMBISONIC_WXYZ",
	"B_MATRIX_PROLOGIC_LR",
	"B_MEDIA_ADDON_DISABLED",
	"B_MEDIA_ADDON_FAILED",
	"B_MEDIA_ADDON_RESTRICTED",
	"B_MEDIA_ALREADY_CONNECTED",
	"B_MEDIA_ANY_QUALITY",
	"B_MEDIA_APP_ALREADY_REGISTERED",
	"B_MEDIA_APP_NOT_REGISTERED",
	"B_MEDIA_BAD_BUFFER",
	"B_MEDIA_BAD_CLIP_FORMAT",
	"B_MEDIA_BAD_DESTINATION",
	"B_MEDIA_BAD_FORMAT",
	"B_MEDIA_BAD_NODE",
	"B_MEDIA_BAD_SOURCE",
	"B_MEDIA_BUFFERS_NOT_RECLAIMED",
	"B_MEDIA_BUFFER_ALREADY_EXISTS",
	"B_MEDIA_BUFFER_CREATED",
	"B_MEDIA_BUFFER_DELETED",
	"B_MEDIA_CANNOT_CHANGE_RUN_MODE",
	"B_MEDIA_CANNOT_RECLAIM_BUFFERS",
	"B_MEDIA_CANNOT_SEEK",
	"B_MEDIA_CHANGE_IN_PROGRESS",
	"B_MEDIA_CONNECTION_BROKEN",
	"B_MEDIA_CONNECTION_MADE",
	"B_MEDIA_DEFAULT_CHANGED",
	"B_MEDIA_DUPLICATE_FORMAT",
	"B_MEDIA_ENCODED_AUDIO",
	"B_MEDIA_ENCODED_VIDEO",
	"B_MEDIA_FILE_BIG_BUFFERS",
	"B_MEDIA_FILE_NO_READ_AHEAD",
	"B_MEDIA_FILE_REPLACE_MODE",
	"B_MEDIA_FILE_UNBUFFERED",
	"B_MEDIA_FIRST_USER_TYPE",
	"B_MEDIA_FLAGS_PRIVATE",
	"B_MEDIA_FLAGS_VERSION",
	"B_MEDIA_FLAVORS_CHANGED",
	"B_MEDIA_FORMAT_CHANGED",
	"B_MEDIA_HIGH_QUALITY",
	"B_MEDIA_HTML",
	"B_MEDIA_KEY_FRAME",
	"B_MEDIA_LOW_QUALITY",
	"B_MEDIA_MEDIUM_QUALITY",
	"B_MEDIA_MIDI",
	"B_MEDIA_MULTISTREAM",
	"B_MEDIA_NAME_LENGTH",
	"B_MEDIA_NEW_PARAMETER_VALUE",
	"B_MEDIA_NODE_ALREADY_EXISTS",
	"B_MEDIA_NODE_BUSY",
	"B_MEDIA_NODE_CREATED",
	"B_MEDIA_NODE_DELETED",
	"B_MEDIA_NODE_STOPPED",
	"B_MEDIA_NOT_CONNECTED",
	"B_MEDIA_NO_HANDLER",
	"B_MEDIA_NO_TYPE",
	"B_MEDIA_PARAMETERS",
	"B_MEDIA_PARAMETER_CHANGED",
	"B_MEDIA_PARAMETER_GROUP_TYPE",
	"B_MEDIA_PARAMETER_TYPE",
	"B_MEDIA_PARAMETER_WEB_TYPE",
	"B_MEDIA_PRIVATE",
	"B_MEDIA_RAW_AUDIO",
	"B_MEDIA_RAW_VIDEO",
	"B_MEDIA_REALTIME_ALLOCATOR",
	"B_MEDIA_REALTIME_ANYKIND",
	"B_MEDIA_REALTIME_AUDIO",
	"B_MEDIA_REALTIME_DISABLED",
	"B_MEDIA_REALTIME_UNAVAILABLE",
	"B_MEDIA_REALTIME_VIDEO",
	"B_MEDIA_REJECT_WILDCARDS",
	"B_MEDIA_REPLACE_MODE",
	"B_MEDIA_SEEK_CLOSEST_BACKWARD",
	"B_MEDIA_SEEK_CLOSEST_FORWARD",
	"B_MEDIA_SEEK_DIRECTION_MASK",
	"B_MEDIA_STALE_CHANGE_COUNT",
	"B_MEDIA_SYSTEM_FAILURE",
	"B_MEDIA_TEXT",
	"B_MEDIA_TIMECODE",
	"B_MEDIA_TIME_SOURCE_BUSY",
	"B_MEDIA_TIME_SOURCE_STOPPED",
	"B_MEDIA_TOO_MANY_BUFFERS",
	"B_MEDIA_TOO_MANY_NODES",
	"B_MEDIA_TRANSPORT_STATE",
	"B_MEDIA_UNKNOWN_TYPE",
	"B_MEDIA_VBL",
	"B_MEDIA_WEB_CHANGED",
	"B_MEDIA_WILDCARD",
	"B_MEDIUM_QUALITY",
	"B_MPEG_1_AUDIO_LAYER_1",
	"B_MPEG_1_AUDIO_LAYER_2",
	"B_MPEG_1_AUDIO_LAYER_3",
	"B_MPEG_1_VIDEO",
	"B_MPEG_ANY",
	"B_MUTE",
	"B_NO_ACTION",
	"B_NO_CLEANUP",
	"B_NO_EVENT",
	"B_NO_MERGE",
	"B_OK",
	"B_OUTPUT_MUX",
	"B_PARAMETER",
	"B_PHYSICAL_INPUT",
	"B_PHYSICAL_OUTPUT",
	"B_PRESENTATION_BG",
	"B_PRESENTATION_FG",
	"B_PRODUCER_STOPPED",
	"B_QUALITY",
	"B_QUITTING",
	"B_RECORDING",
	"B_RECSTATE",
	"B_RECYCLE_BUFFER",
	"B_REMOVE_EVENT",
	"B_RESOLUTION",
	"B_RESORT_QUEUE",
	"B_SEEK",
	"B_SETTINGS_BG",
	"B_SETTINGS_FG",
	"B_SET_DEFAULT",
	"B_SHUTTLE_MODE",
	"B_SHUTTLE_SPEED",
	"B_SIMPLE_TRANSPORT",
	"B_SOUNDS",
	"B_SOUND_DONE",
	"B_START",
	"B_STARTED",
	"B_STOP",
	"B_STOPPED",
	"B_SYSTEM_MIXER",
	"B_TERMINATED",
	"B_TIMECODE_100",
	"B_TIMECODE_18",
	"B_TIMECODE_24",
	"B_TIMECODE_25",
	"B_TIMECODE_30",
	"B_TIMECODE_30_DROP_2",
	"B_TIMECODE_30_DROP_4",
	"B_TIMECODE_75",
	"B_TIMECODE_DEFAULT",
	"B_TIMER",
	"B_TIMESOURCE_SEEK",
	"B_TIMESOURCE_START",
	"B_TIMESOURCE_STOP",
	"B_TIMESOURCE_STOP_IMMEDIATELY",
	"B_TIME_SOURCE",
	"B_TRACK",
	"B_TUNER_CHANNEL",
	"B_UNIX_FILE",
	"B_UNKNOWN_FILE",
	"B_UNREGISTERED",
	"B_USER_CLEANUP",
	"B_USER_EVENT",
	"B_USER_RUN_STATES",
	"B_VIDEO_BOTTOM_LEFT_RIGHT",
	"B_VIDEO_FORMAT",
	"B_VIDEO_TOP_LEFT_RIGHT",
	"B_WARP",
	"B_WAVE_FILE",
	"B_WEB_ADC_CONVERTER",
	"B_WEB_BUFFER_INPUT",
	"B_WEB_BUFFER_OUTPUT",
	"B_WEB_DAC_CONVERTER",
	"B_WEB_LOGICAL_BUS",
	"B_WEB_LOGICAL_INPUT",
	"B_WEB_LOGICAL_OUTPUT",
	"B_WEB_PHYSICAL_INPUT",
	"B_WEB_PHYSICAL_OUTPUT",
	"B_BAD_INDEX",
	"B_BAD_TYPE",
	"B_BAD_VALUE",
	"B_BUSY",
	"B_CANCELED",
	"B_INTERRUPTED",
	"B_IO_ERROR",
	"B_MISMATCHED_VALUES",
	"B_NAME_IN_USE",
	"B_NAME_NOT_FOUND",
	"B_NOT_ALLOWED",
	"B_NO_ERROR",
	"B_NO_INIT",
	"B_NO_MEMORY",
	"B_PERMISSION_DENIED",
	"B_TIMED_OUT",
	"B_WOULD_BLOCK",
NULL
};
