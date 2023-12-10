#include "EventHandler.h"

namespace OGLR
{
	std::string to_string(K_Event event)
	{
		switch (event)
		{
		case K_Event::NONE:
			return "None!";

			// Number Keys - 1 - 10
		case K_Event::KEY_0:
			return "Key 0";
		case K_Event::KEY_1:
			return "Key 1";
		case K_Event::KEY_2:
			return "Key 2";
		case K_Event::KEY_3:
			return "Key 3";
		case K_Event::KEY_4:
			return "Key 4";
		case K_Event::KEY_5:
			return "Key 5";
		case K_Event::KEY_6:
			return "Key 6";
		case K_Event::KEY_7:
			return "Key 7";
		case K_Event::KEY_8:
			return "Key 8";
		case K_Event::KEY_9:
			return "Key 9";

			// KeyPad Number Keys - 11 - 20
		case K_Event::KEY_NUM_0:
			return "Key Numpad 0";
		case K_Event::KEY_NUM_1:
			return "Key Numpad 1";
		case K_Event::KEY_NUM_2:
			return "Key Numpad 2";
		case K_Event::KEY_NUM_3:
			return "Key Numpad 3";
		case K_Event::KEY_NUM_4:
			return "Key Numpad 4";
		case K_Event::KEY_NUM_5:
			return "Key Numpad 5";
		case K_Event::KEY_NUM_6:
			return "Key Numpad 6";
		case K_Event::KEY_NUM_7:
			return "Key Numpad 7";
		case K_Event::KEY_NUM_8:
			return "Key Numpad 8";
		case K_Event::KEY_NUM_9:
			return "Key Numpad 9";

			// Alphabet Keys - 21 - 46
		case K_Event::KEY_A:
			return "Key A";
		case K_Event::KEY_B:
			return "Key B";
		case K_Event::KEY_C:
			return "Key C";
		case K_Event::KEY_D:
			return "Key D";
		case K_Event::KEY_E:
			return "Key E";
		case K_Event::KEY_F:
			return "Key F";
		case K_Event::KEY_G:
			return "Key G";
		case K_Event::KEY_H:
			return "Key H";
		case K_Event::KEY_I:
			return "Key I";
		case K_Event::KEY_J:
			return "Key J";
		case K_Event::KEY_K:
			return "Key K";
		case K_Event::KEY_L:
			return "Key L";
		case K_Event::KEY_M:
			return "Key M";
		case K_Event::KEY_N:
			return "Key N";
		case K_Event::KEY_O:
			return "Key O";
		case K_Event::KEY_P:
			return "Key P";
		case K_Event::KEY_Q:
			return "Key Q";
		case K_Event::KEY_R:
			return "Key R";
		case K_Event::KEY_S:
			return "Key S";
		case K_Event::KEY_T:
			return "Key T";
		case K_Event::KEY_U:
			return "Key U";
		case K_Event::KEY_V:
			return "Key V";
		case K_Event::KEY_W:
			return "Key W";
		case K_Event::KEY_X:
			return "Key X";
		case K_Event::KEY_Y:
			return "Key Y";
		case K_Event::KEY_Z:
			return "Key Z";

			// Function Keys - 47 - 58
		case K_Event::KEY_F1:
			return "Key F1";
		case K_Event::KEY_F2:
			return "Key F2";
		case K_Event::KEY_F3:
			return "Key F3";
		case K_Event::KEY_F4:
			return "Key F4";
		case K_Event::KEY_F5:
			return "Key F5";
		case K_Event::KEY_F6:
			return "Key F6";
		case K_Event::KEY_F7:
			return "Key F7";
		case K_Event::KEY_F8:
			return "Key F8";
		case K_Event::KEY_F9:
			return "Key F9";
		case K_Event::KEY_F10:
			return "Key F10";
		case K_Event::KEY_F11:
			return "Key F11";
		case K_Event::KEY_F12:
			return "Key F12";

			// Special Keys - 59 - 76
		case K_Event::KEY_LSHIFT:
			return "Key Left Shift";
		case K_Event::KEY_RSHIFT:
			return "Key Right Shift";
		case K_Event::KEY_LCTRL:
			return "Key Left Ctrl";
		case K_Event::KEY_RCTRL:
			return "Key Right Ctrl";
		case K_Event::KEY_ESC:
			return "Key Esc";
		case K_Event::KEY_LALT:
			return "Key Left Alt";
		case K_Event::KEY_RALT:
			return "Key Right Alt";
		case K_Event::KEY_TAB:
			return "Key Tab";
		case K_Event::KEY_CAPS:
			return "Key Caps";
		case K_Event::KEY_ENTER:
			return "Key Enter";
		case K_Event::KEY_NUMLOCK:
			return "Key NumLock";
		case K_Event::KEY_NUM_ENTER:
			return "Key Numlock's Enter";
		case K_Event::KEY_WIN:
			return "Key Win";
		case K_Event::KEY_BACKSPACE:
			return "Key Backspace";
		case K_Event::KEY_UP:
			return "Key Up";
		case K_Event::KEY_DOWN:
			return "Key Down";
		case K_Event::KEY_LEFT:
			return "Key Left";
		case K_Event::KEY_RIGHT:
			return "Key Right";

			// Symbols - 77 - 93
		case K_Event::KEY_SPACE:
			return "Key Space";
		case K_Event::KEY_COMMA:
			return "Key Comma";
		case K_Event::KEY_FULL_STOP:
			return "Key Full Stop";
		case K_Event::KEY_MINUS:
			return "Key Minus";
		case K_Event::KEY_EQUAL:
			return "Key Equal";
		case K_Event::KEY_LEFT_SQBRACKET:
			return "Key Left Square Bracket";
		case K_Event::KEY_RIGHT_SQBRACKET:
			return "Key Right Square Bracket";
		case K_Event::KEY_BACK_SLASH:
			return "Key Back Slash";
		case K_Event::KEY_FORWARD_SLASH:
			return "Key Forward Slash";
		case K_Event::KEY_SEMICOLON:
			return "Key Semicolon";
		case K_Event::KEY_TILDE:
			return "Key Tilde";
		case K_Event::KEY_INVERTED_COMMA:
			return "Key Inverted Comma";
		case K_Event::KEY_NUM_DOT:
			return "Key Numpad Dot";
		case K_Event::KEY_NUM_ASTERISK:
			return "Key Numpad Asterisk";
		case K_Event::KEY_NUM_MINUS:
			return "Key Numpad Minus";
		case K_Event::KEY_NUM_SLASH:
			return "Key Numpad Slash";
		case K_Event::KEY_NUM_PLUS:
			return "Key Numpad Plus";
		}
	}

	std::string to_string(K_Operation operation)
	{
		switch (operation)
		{
		case K_Operation::NONE:
			return "None!";
		case K_Operation::KEY_PRESS:
			return "Key Press";
		case K_Operation::KEY_RELEASE:
			return "Key Release";
		}
	}

	KeyboardEvent::KeyboardEvent(K_Event eventItem, K_Operation eventOperation)
		: m_EventItem(eventItem), m_EventOperation(eventOperation) {}

	bool KeyboardEvent::isShift() const
	{
		return (m_EventItem == K_Event::KEY_LSHIFT) || (m_EventItem == K_Event::KEY_RSHIFT);
	}
	bool KeyboardEvent::isCtrl() const
	{
		return (m_EventItem == K_Event::KEY_LCTRL) || (m_EventItem == K_Event::KEY_RCTRL);
	}
	bool KeyboardEvent::isAlt() const
	{
		return (m_EventItem == K_Event::KEY_LALT) || (m_EventItem == K_Event::KEY_RALT);
	}
	bool KeyboardEvent::isNum() const
	{
		switch (m_EventItem)
		{
		case K_Event::KEY_0:
		case K_Event::KEY_1:
		case K_Event::KEY_2:
		case K_Event::KEY_3:
		case K_Event::KEY_4:
		case K_Event::KEY_5:
		case K_Event::KEY_6:
		case K_Event::KEY_7:
		case K_Event::KEY_8:
		case K_Event::KEY_9:
		case K_Event::KEY_NUM_0:
		case K_Event::KEY_NUM_1:
		case K_Event::KEY_NUM_2:
		case K_Event::KEY_NUM_3:
		case K_Event::KEY_NUM_4:
		case K_Event::KEY_NUM_5:
		case K_Event::KEY_NUM_6:
		case K_Event::KEY_NUM_7:
		case K_Event::KEY_NUM_8:
		case K_Event::KEY_NUM_9:
			return true;
		default:
			return false;
		}
	}
	bool KeyboardEvent::isAlphabet() const
	{
		switch (m_EventItem)
		{
		case K_Event::KEY_A:
		case K_Event::KEY_B:
		case K_Event::KEY_C:
		case K_Event::KEY_D:
		case K_Event::KEY_E:
		case K_Event::KEY_F:
		case K_Event::KEY_G:
		case K_Event::KEY_H:
		case K_Event::KEY_I:
		case K_Event::KEY_J:
		case K_Event::KEY_K:
		case K_Event::KEY_L:
		case K_Event::KEY_M:
		case K_Event::KEY_N:
		case K_Event::KEY_O:
		case K_Event::KEY_P:
		case K_Event::KEY_Q:
		case K_Event::KEY_R:
		case K_Event::KEY_S:
		case K_Event::KEY_T:
		case K_Event::KEY_U:
		case K_Event::KEY_V:
		case K_Event::KEY_W:
		case K_Event::KEY_X:
		case K_Event::KEY_Y:
		case K_Event::KEY_Z:
			return true;
		default:
			return false;
		}
	}
	bool KeyboardEvent::isAlphaNum() const
	{
		return isNum() || isAlphabet();
	}
	bool KeyboardEvent::isFunctionKey() const
	{
		switch (m_EventItem)
		{
		case K_Event::KEY_F1:
		case K_Event::KEY_F2:
		case K_Event::KEY_F3:
		case K_Event::KEY_F4:
		case K_Event::KEY_F5:
		case K_Event::KEY_F6:
		case K_Event::KEY_F7:
		case K_Event::KEY_F8:
		case K_Event::KEY_F9:
		case K_Event::KEY_F10:
		case K_Event::KEY_F11:
		case K_Event::KEY_F12:
			return true;
		default:
			return false;
		}
	}
	bool KeyboardEvent::isSpecialKey() const
	{
		switch (m_EventItem)
		{
		case K_Event::KEY_LCTRL:
		case K_Event::KEY_RCTRL:
		case K_Event::KEY_LSHIFT:
		case K_Event::KEY_RSHIFT:
		case K_Event::KEY_LALT:
		case K_Event::KEY_RALT:
		case K_Event::KEY_BACKSPACE:
		case K_Event::KEY_CAPS:
		case K_Event::KEY_ESC:
		case K_Event::KEY_NUMLOCK:
		case K_Event::KEY_NUM_ENTER:
			return true;
		default:
			return false;
		}
	}
	bool KeyboardEvent::equals(const KeyboardEvent& e) const
	{
		return (m_EventItem == e.m_EventItem && m_EventOperation == e.m_EventOperation);
	}
	bool KeyboardEvent::operator==(const KeyboardEvent& e) const
	{
		return equals(e);
	}

	bool KeyboardEvent::hasCharRepresentation() const
	{
		if (isAlphaNum()) return true;

		switch (m_EventItem)
		{
		case K_Event::KEY_SPACE:
		case K_Event::KEY_TILDE:
		case K_Event::KEY_MINUS:
		case K_Event::KEY_EQUAL:
		case K_Event::KEY_LEFT_SQBRACKET:
		case K_Event::KEY_RIGHT_SQBRACKET:
		case K_Event::KEY_FORWARD_SLASH:
		case K_Event::KEY_BACK_SLASH:
		case K_Event::KEY_SEMICOLON:
		case K_Event::KEY_INVERTED_COMMA:
		case K_Event::KEY_COMMA:
		case K_Event::KEY_FULL_STOP:
		case K_Event::KEY_NUM_ASTERISK:
		case K_Event::KEY_NUM_DOT:
		case K_Event::KEY_NUM_MINUS:
		case K_Event::KEY_NUM_PLUS:
		case K_Event::KEY_NUM_SLASH:
			return true;
		}
		return false;
	}
	char KeyboardEvent::getCharRepresentation(bool shift) const {
		switch (m_EventItem) {
			// Number Keys - 1 - 10
		case K_Event::KEY_1: return (shift) ? '!' : '1';
		case K_Event::KEY_2: return (shift) ? '@' : '2';
		case K_Event::KEY_3: return (shift) ? '#' : '3';
		case K_Event::KEY_4: return (shift) ? '$' : '4';
		case K_Event::KEY_5: return (shift) ? '%' : '5';
		case K_Event::KEY_6: return (shift) ? '^' : '6';
		case K_Event::KEY_7: return (shift) ? '&' : '7';
		case K_Event::KEY_8: return (shift) ? '*' : '8';
		case K_Event::KEY_9: return (shift) ? '(' : '9';
		case K_Event::KEY_0: return (shift) ? ')' : '0';

			// KeyPad Number Keys - 11 - 20
		case K_Event::KEY_NUM_1: return '1';
		case K_Event::KEY_NUM_2: return '2';
		case K_Event::KEY_NUM_3: return '3';
		case K_Event::KEY_NUM_4: return '4';
		case K_Event::KEY_NUM_5: return '5';
		case K_Event::KEY_NUM_6: return '6';
		case K_Event::KEY_NUM_7: return '7';
		case K_Event::KEY_NUM_8: return '8';
		case K_Event::KEY_NUM_9: return '9';
		case K_Event::KEY_NUM_0: return '0';

			// Alphabet Keys - 21 - 46
		case K_Event::KEY_A: return (shift) ? 'A' : 'a';
		case K_Event::KEY_B: return (shift) ? 'B' : 'b';
		case K_Event::KEY_C: return (shift) ? 'C' : 'c';
		case K_Event::KEY_D: return (shift) ? 'D' : 'd';
		case K_Event::KEY_E: return (shift) ? 'E' : 'e';
		case K_Event::KEY_F: return (shift) ? 'F' : 'f';
		case K_Event::KEY_G: return (shift) ? 'G' : 'g';
		case K_Event::KEY_H: return (shift) ? 'H' : 'h';
		case K_Event::KEY_I: return (shift) ? 'I' : 'i';
		case K_Event::KEY_J: return (shift) ? 'J' : 'j';
		case K_Event::KEY_K: return (shift) ? 'K' : 'k';
		case K_Event::KEY_L: return (shift) ? 'L' : 'l';
		case K_Event::KEY_M: return (shift) ? 'M' : 'm';
		case K_Event::KEY_N: return (shift) ? 'N' : 'n';
		case K_Event::KEY_O: return (shift) ? 'O' : 'o';
		case K_Event::KEY_P: return (shift) ? 'P' : 'p';
		case K_Event::KEY_Q: return (shift) ? 'Q' : 'q';
		case K_Event::KEY_R: return (shift) ? 'R' : 'r';
		case K_Event::KEY_S: return (shift) ? 'S' : 's';
		case K_Event::KEY_T: return (shift) ? 'T' : 't';
		case K_Event::KEY_U: return (shift) ? 'U' : 'u';
		case K_Event::KEY_V: return (shift) ? 'V' : 'v';
		case K_Event::KEY_W: return (shift) ? 'W' : 'w';
		case K_Event::KEY_X: return (shift) ? 'X' : 'x';
		case K_Event::KEY_Y: return (shift) ? 'Y' : 'y';
		case K_Event::KEY_Z: return (shift) ? 'Z' : 'z';

			// Symbols - 77 - 93
		case K_Event::KEY_SPACE: return ' ';
		case K_Event::KEY_COMMA: return (shift) ? '<' : ',';
		case K_Event::KEY_FULL_STOP: return (shift) ? '>' : '.';
		case K_Event::KEY_MINUS: return (shift) ? '_' : '-';
		case K_Event::KEY_EQUAL: return (shift) ? '+' : '=';
		case K_Event::KEY_LEFT_SQBRACKET: return (shift) ? '{' : '[';
		case K_Event::KEY_RIGHT_SQBRACKET: return (shift) ? '}' : ']';
		case K_Event::KEY_BACK_SLASH: return (shift) ? '|' : '\\';
		case K_Event::KEY_FORWARD_SLASH: return (shift) ? '?' : '/';
		case K_Event::KEY_SEMICOLON: return (shift) ? ':' : ';';
		case K_Event::KEY_TILDE: return (shift) ? '~' : '`';
		case K_Event::KEY_INVERTED_COMMA: return (shift) ? '"' : '\'';
		case K_Event::KEY_NUM_DOT: return '.';
		case K_Event::KEY_NUM_ASTERISK: return '*';
		case K_Event::KEY_NUM_MINUS: return '-';
		case K_Event::KEY_NUM_SLASH: return '/';
		case K_Event::KEY_NUM_PLUS: return '+';

		default: return '\0';  // Return null character for keys without specific representations
		}
	}

	KeyboardEventHandler::KeyboardEventHandler(GLFWwindow* window)
		: m_Window(window), m_OnEventChange(nullptr), m_CachedEvents() {}
	KeyboardEventHandler::KeyboardEventHandler(GLFWwindow* window, OnEventChange func)
		: m_Window(window), m_OnEventChange(func), m_CachedEvents() {}

	K_Operation KeyboardEventHandler::getKeyStatus(unsigned int glfwKeyId) const
	{
		return glfwGetKey(m_Window, glfwKeyId) ? K_Operation::KEY_PRESS : K_Operation::KEY_RELEASE;
	}

	unsigned int KeyboardEventHandler::getKeyIndex(K_Event event)
	{
		switch (event)
		{
		case K_Event::KEY_0: return 0;
		case K_Event::KEY_1: return 1;
		case K_Event::KEY_2: return 2;
		case K_Event::KEY_3: return 3;
		case K_Event::KEY_4: return 4;
		case K_Event::KEY_5: return 5;
		case K_Event::KEY_6: return 6;
		case K_Event::KEY_7: return 7;
		case K_Event::KEY_8: return 8;
		case K_Event::KEY_9: return 9;

		case K_Event::KEY_NUM_0: return 10;
		case K_Event::KEY_NUM_1: return 11;
		case K_Event::KEY_NUM_2: return 12;
		case K_Event::KEY_NUM_3: return 13;
		case K_Event::KEY_NUM_4: return 14;
		case K_Event::KEY_NUM_5: return 15;
		case K_Event::KEY_NUM_6: return 16;
		case K_Event::KEY_NUM_7: return 17;
		case K_Event::KEY_NUM_8: return 18;
		case K_Event::KEY_NUM_9: return 19;

		case K_Event::KEY_A: return 20;
		case K_Event::KEY_B: return 21;
		case K_Event::KEY_C: return 22;
		case K_Event::KEY_D: return 23;
		case K_Event::KEY_E: return 24;
		case K_Event::KEY_F: return 25;
		case K_Event::KEY_G: return 26;
		case K_Event::KEY_H: return 27;
		case K_Event::KEY_I: return 28;
		case K_Event::KEY_J: return 29;
		case K_Event::KEY_K: return 20;
		case K_Event::KEY_L: return 31;
		case K_Event::KEY_M: return 32;
		case K_Event::KEY_N: return 33;
		case K_Event::KEY_O: return 34;
		case K_Event::KEY_P: return 35;
		case K_Event::KEY_Q: return 36;
		case K_Event::KEY_R: return 37;
		case K_Event::KEY_S: return 38;
		case K_Event::KEY_T: return 39;
		case K_Event::KEY_U: return 40;
		case K_Event::KEY_V: return 41;
		case K_Event::KEY_W: return 42;
		case K_Event::KEY_X: return 43;
		case K_Event::KEY_Y: return 44;
		case K_Event::KEY_Z: return 45;

		case K_Event::KEY_F1: return 46;
		case K_Event::KEY_F2: return 47;
		case K_Event::KEY_F3: return 48;
		case K_Event::KEY_F4: return 49;
		case K_Event::KEY_F5: return 50;
		case K_Event::KEY_F6: return 51;
		case K_Event::KEY_F7: return 52;
		case K_Event::KEY_F8: return 53;
		case K_Event::KEY_F9: return 54;
		case K_Event::KEY_F10: return 55;
		case K_Event::KEY_F11: return 56;
		case K_Event::KEY_F12: return 57;

		case K_Event::KEY_LSHIFT: return 58;
		case K_Event::KEY_RSHIFT: return 59;
		case K_Event::KEY_LCTRL: return 60;
		case K_Event::KEY_RCTRL: return 61;
		case K_Event::KEY_ESC: return 62;
		case K_Event::KEY_LALT: return 63;
		case K_Event::KEY_RALT: return 64;
		case K_Event::KEY_TAB: return 65;
		case K_Event::KEY_CAPS: return 66;
		case K_Event::KEY_ENTER: return 67;
		case K_Event::KEY_NUMLOCK: return 68;
		case K_Event::KEY_NUM_ENTER: return 69;
		case K_Event::KEY_WIN: return 70;
		case K_Event::KEY_BACKSPACE: return 71;
		case K_Event::KEY_UP: return 72;
		case K_Event::KEY_DOWN: return 73;
		case K_Event::KEY_LEFT: return 74;
		case K_Event::KEY_RIGHT: return 75;

		case K_Event::KEY_SPACE: return 76;
		case K_Event::KEY_COMMA: return 77;
		case K_Event::KEY_FULL_STOP: return 78;
		case K_Event::KEY_MINUS: return 79;
		case K_Event::KEY_EQUAL: return 80;
		case K_Event::KEY_LEFT_SQBRACKET: return 81;
		case K_Event::KEY_RIGHT_SQBRACKET: return 82;
		case K_Event::KEY_BACK_SLASH: return 83;
		case K_Event::KEY_FORWARD_SLASH: return 84;
		case K_Event::KEY_SEMICOLON: return 85;
		case K_Event::KEY_TILDE: return 86;
		case K_Event::KEY_INVERTED_COMMA: return 87;
		case K_Event::KEY_NUM_DOT: return 88;
		case K_Event::KEY_NUM_ASTERISK: return 89;
		case K_Event::KEY_NUM_MINUS: return 90;
		case K_Event::KEY_NUM_PLUS: return 91;
		case K_Event::KEY_NUM_SLASH: return 92;
		}
	}

	void KeyboardEventHandler::placeEvent(unsigned int glfwKeyId, K_Event id, unsigned int index, std::vector<KeyboardEvent>& events) 
	{
		K_Operation operation = getKeyStatus(glfwKeyId);

		if (!m_OnEventChange)
		{
			m_CachedEvents[index] = operation;
			return;
		}

		if (m_CachedEvents.at(index) != operation)
		{
			events.push_back(KeyboardEvent(id, operation));
			m_CachedEvents[index] = operation;
		}
	}

	void KeyboardEventHandler::pollEvents()
	{
		std::vector<KeyboardEvent> events;
		glfwPollEvents();

#pragma region FUNCTION_KEYS
		placeEvent(GLFW_KEY_F1, K_Event::KEY_F1, 46, events);
		placeEvent(GLFW_KEY_F2, K_Event::KEY_F2, 47, events);
		placeEvent(GLFW_KEY_F3, K_Event::KEY_F3, 48, events);
		placeEvent(GLFW_KEY_F4, K_Event::KEY_F4, 49, events);
		placeEvent(GLFW_KEY_F5, K_Event::KEY_F5, 50, events);
		placeEvent(GLFW_KEY_F6, K_Event::KEY_F6, 51, events);
		placeEvent(GLFW_KEY_F7, K_Event::KEY_F7, 52, events);
		placeEvent(GLFW_KEY_F8, K_Event::KEY_F8, 53, events);
		placeEvent(GLFW_KEY_F9, K_Event::KEY_F9, 54, events);
		placeEvent(GLFW_KEY_F10, K_Event::KEY_F10, 55, events);
		placeEvent(GLFW_KEY_F11, K_Event::KEY_F11, 56, events);
		placeEvent(GLFW_KEY_F12, K_Event::KEY_F12, 57, events);
#pragma endregion

#pragma region SPECIAL_KEYS
		placeEvent(GLFW_KEY_LEFT_SHIFT, K_Event::KEY_LSHIFT, 58, events);
		placeEvent(GLFW_KEY_RIGHT_SHIFT, K_Event::KEY_RSHIFT, 59, events);
		placeEvent(GLFW_KEY_LEFT_CONTROL, K_Event::KEY_LCTRL, 60, events);
		placeEvent(GLFW_KEY_RIGHT_CONTROL, K_Event::KEY_RCTRL, 61, events);
		placeEvent(GLFW_KEY_ESCAPE, K_Event::KEY_ESC, 62, events);
		placeEvent(GLFW_KEY_LEFT_ALT, K_Event::KEY_LALT, 63, events);
		placeEvent(GLFW_KEY_RIGHT_ALT, K_Event::KEY_RALT, 64, events);
		placeEvent(GLFW_KEY_TAB, K_Event::KEY_TAB, 65, events);
		placeEvent(GLFW_KEY_CAPS_LOCK, K_Event::KEY_CAPS, 66, events);
		placeEvent(GLFW_KEY_ENTER, K_Event::KEY_ENTER, 67, events);
		placeEvent(GLFW_KEY_NUM_LOCK, K_Event::KEY_NUMLOCK, 68, events);
		placeEvent(GLFW_KEY_KP_ENTER, K_Event::KEY_NUM_ENTER, 69, events);
		placeEvent(GLFW_KEY_LEFT_SUPER, K_Event::KEY_WIN, 70, events);
		placeEvent(GLFW_KEY_BACKSPACE, K_Event::KEY_BACKSPACE, 71, events);
		placeEvent(GLFW_KEY_UP, K_Event::KEY_UP, 72, events);
		placeEvent(GLFW_KEY_DOWN, K_Event::KEY_DOWN, 73, events);
		placeEvent(GLFW_KEY_LEFT, K_Event::KEY_LEFT, 74, events);
		placeEvent(GLFW_KEY_RIGHT, K_Event::KEY_RIGHT, 75, events);
#pragma endregion

#pragma region NUMBER_KEYS
		placeEvent(GLFW_KEY_0, K_Event::KEY_0, 0, events);
		placeEvent(GLFW_KEY_1, K_Event::KEY_1, 1, events);
		placeEvent(GLFW_KEY_2, K_Event::KEY_2, 2, events);
		placeEvent(GLFW_KEY_3, K_Event::KEY_3, 3, events);
		placeEvent(GLFW_KEY_4, K_Event::KEY_4, 4, events);
		placeEvent(GLFW_KEY_5, K_Event::KEY_5, 5, events);
		placeEvent(GLFW_KEY_6, K_Event::KEY_6, 6, events);
		placeEvent(GLFW_KEY_7, K_Event::KEY_7, 7, events);
		placeEvent(GLFW_KEY_8, K_Event::KEY_8, 8, events);
		placeEvent(GLFW_KEY_9, K_Event::KEY_9, 9, events);
#pragma endregion

#pragma region ALPHABET_KEYS
		placeEvent(GLFW_KEY_A, K_Event::KEY_A, 20, events);
		placeEvent(GLFW_KEY_B, K_Event::KEY_B, 21, events);
		placeEvent(GLFW_KEY_C, K_Event::KEY_C, 22, events);
		placeEvent(GLFW_KEY_D, K_Event::KEY_D, 23, events);
		placeEvent(GLFW_KEY_E, K_Event::KEY_E, 24, events);
		placeEvent(GLFW_KEY_F, K_Event::KEY_F, 25, events);
		placeEvent(GLFW_KEY_G, K_Event::KEY_G, 26, events);
		placeEvent(GLFW_KEY_H, K_Event::KEY_H, 27, events);
		placeEvent(GLFW_KEY_I, K_Event::KEY_I, 28, events);
		placeEvent(GLFW_KEY_J, K_Event::KEY_J, 29, events);
		placeEvent(GLFW_KEY_K, K_Event::KEY_K, 30, events);
		placeEvent(GLFW_KEY_L, K_Event::KEY_L, 31, events);
		placeEvent(GLFW_KEY_M, K_Event::KEY_M, 32, events);
		placeEvent(GLFW_KEY_N, K_Event::KEY_N, 33, events);
		placeEvent(GLFW_KEY_O, K_Event::KEY_O, 34, events);
		placeEvent(GLFW_KEY_P, K_Event::KEY_P, 35, events);
		placeEvent(GLFW_KEY_Q, K_Event::KEY_Q, 36, events);
		placeEvent(GLFW_KEY_R, K_Event::KEY_R, 37, events);
		placeEvent(GLFW_KEY_S, K_Event::KEY_S, 38, events);
		placeEvent(GLFW_KEY_T, K_Event::KEY_T, 39, events);
		placeEvent(GLFW_KEY_U, K_Event::KEY_U, 40, events);
		placeEvent(GLFW_KEY_V, K_Event::KEY_V, 41, events);
		placeEvent(GLFW_KEY_W, K_Event::KEY_W, 42, events);
		placeEvent(GLFW_KEY_X, K_Event::KEY_X, 43, events);
		placeEvent(GLFW_KEY_Y, K_Event::KEY_Y, 44, events);
		placeEvent(GLFW_KEY_Z, K_Event::KEY_Z, 45, events);
#pragma endregion

#pragma region SYMBOLS
		placeEvent(GLFW_KEY_SPACE, K_Event::KEY_SPACE, 76, events);
		placeEvent(GLFW_KEY_COMMA, K_Event::KEY_COMMA, 77, events);
		placeEvent(GLFW_KEY_PERIOD, K_Event::KEY_FULL_STOP, 78, events);
		placeEvent(GLFW_KEY_MINUS, K_Event::KEY_MINUS, 79, events);
		placeEvent(GLFW_KEY_EQUAL, K_Event::KEY_EQUAL, 80, events);
		placeEvent(GLFW_KEY_LEFT_BRACKET, K_Event::KEY_LEFT_SQBRACKET, 81, events);
		placeEvent(GLFW_KEY_RIGHT_BRACKET, K_Event::KEY_RIGHT_SQBRACKET, 82, events);
		placeEvent(GLFW_KEY_BACKSLASH, K_Event::KEY_BACK_SLASH, 83, events);
		placeEvent(GLFW_KEY_SLASH, K_Event::KEY_FORWARD_SLASH, 84, events);
		placeEvent(GLFW_KEY_SEMICOLON, K_Event::KEY_SEMICOLON, 85, events);
		placeEvent(GLFW_KEY_GRAVE_ACCENT, K_Event::KEY_TILDE, 86, events);
		placeEvent(GLFW_KEY_APOSTROPHE, K_Event::KEY_INVERTED_COMMA, 87, events);
		placeEvent(GLFW_KEY_KP_DECIMAL, K_Event::KEY_NUM_DOT, 88, events);
		placeEvent(GLFW_KEY_KP_MULTIPLY, K_Event::KEY_NUM_ASTERISK, 89, events);
		placeEvent(GLFW_KEY_KP_SUBTRACT, K_Event::KEY_NUM_MINUS, 90, events);
		placeEvent(GLFW_KEY_KP_DIVIDE, K_Event::KEY_NUM_SLASH, 91, events);
		placeEvent(GLFW_KEY_KP_ADD, K_Event::KEY_NUM_PLUS, 92, events);
#pragma endregion

#pragma region KEYPAD_NUMBER_KEYS
		placeEvent(GLFW_KEY_KP_0, K_Event::KEY_NUM_0, 10, events);
		placeEvent(GLFW_KEY_KP_1, K_Event::KEY_NUM_1, 11, events);
		placeEvent(GLFW_KEY_KP_2, K_Event::KEY_NUM_2, 12, events);
		placeEvent(GLFW_KEY_KP_3, K_Event::KEY_NUM_3, 13, events);
		placeEvent(GLFW_KEY_KP_4, K_Event::KEY_NUM_4, 14, events);
		placeEvent(GLFW_KEY_KP_5, K_Event::KEY_NUM_5, 15, events);
		placeEvent(GLFW_KEY_KP_6, K_Event::KEY_NUM_6, 16, events);
		placeEvent(GLFW_KEY_KP_7, K_Event::KEY_NUM_7, 17, events);
		placeEvent(GLFW_KEY_KP_8, K_Event::KEY_NUM_8, 18, events);
		placeEvent(GLFW_KEY_KP_9, K_Event::KEY_NUM_9, 19, events);
#pragma endregion

		for (KeyboardEvent e : events) m_OnEventChange(e);
	}

	void KeyboardEventHandler::addOnEventChangeFunc(OnEventChange func)
	{
		m_OnEventChange = func;
	}
}