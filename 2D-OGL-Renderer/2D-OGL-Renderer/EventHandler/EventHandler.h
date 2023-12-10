#ifndef _2D_OGLR_EventHandler
#define _2D_OGLR_EventHandler

#include "GLFW/glfw3.h"
#include <array>
#include <vector>
#include <string>

namespace OGLR
{
	enum class K_Event
	{
		NONE, // - 0

		// Number Keys - 1 - 10
		KEY_1, KEY_2, KEY_3, KEY_4, KEY_5,
		KEY_6, KEY_7, KEY_8, KEY_9, KEY_0,

		// KeyPad Number Keys - 11 - 20
		KEY_NUM_1, KEY_NUM_2, KEY_NUM_3, KEY_NUM_4, KEY_NUM_5,
		KEY_NUM_6, KEY_NUM_7, KEY_NUM_8, KEY_NUM_9, KEY_NUM_0,

		// Alphabet Keys - 21 - 46
		KEY_A, KEY_B, KEY_C, KEY_D, KEY_E,
		KEY_F, KEY_G, KEY_H, KEY_I, KEY_J,
		KEY_K, KEY_L, KEY_M, KEY_N, KEY_O,
		KEY_P, KEY_Q, KEY_R, KEY_S, KEY_T,
		KEY_U, KEY_V, KEY_W, KEY_X, KEY_Y,
		KEY_Z,

		// Function Keys - 47 - 58
		KEY_F1, KEY_F2, KEY_F3, KEY_F4, KEY_F5,
		KEY_F6, KEY_F7, KEY_F8, KEY_F9, KEY_F10,
		KEY_F11, KEY_F12,

		// Special Keys - 59 - 76
		KEY_LSHIFT, KEY_RSHIFT, KEY_LCTRL, KEY_RCTRL, KEY_ESC,
		KEY_LALT, KEY_RALT, KEY_TAB, KEY_CAPS, KEY_ENTER,
		KEY_NUMLOCK, KEY_NUM_ENTER, KEY_WIN, KEY_BACKSPACE,
		KEY_UP, KEY_DOWN, KEY_LEFT, KEY_RIGHT,

		// Symbols - 77 - 93
		KEY_SPACE, KEY_COMMA, KEY_FULL_STOP, KEY_MINUS, KEY_EQUAL,
		KEY_LEFT_SQBRACKET, KEY_RIGHT_SQBRACKET, KEY_BACK_SLASH, KEY_FORWARD_SLASH, KEY_SEMICOLON,
		KEY_TILDE, KEY_INVERTED_COMMA, KEY_NUM_DOT, KEY_NUM_ASTERISK, KEY_NUM_MINUS,
		KEY_NUM_SLASH, KEY_NUM_PLUS
	};

	enum class K_Operation
	{
		NONE, // - 0

		// Keyboard Operations 1 - 2
		KEY_PRESS, KEY_RELEASE,
	};

	std::string to_string(K_Event keyEvent);
	std::string to_string(K_Operation keyOperation);

	struct KeyboardEvent
	{
	public:
		KeyboardEvent() = delete;
		~KeyboardEvent() = default;
		KeyboardEvent(K_Event event = K_Event::NONE, K_Operation operation = K_Operation::NONE);

	public:
		bool isShift() const;
		bool isCtrl() const;
		bool isAlt() const;
		bool isNum() const;
		bool isAlphabet() const;
		bool isAlphaNum() const;
		bool isFunctionKey() const;
		bool isSpecialKey() const;

		bool hasCharRepresentation() const;
		char getCharRepresentation(bool shift) const;

		bool equals(const KeyboardEvent& e) const;
		bool operator==(const KeyboardEvent& e) const;

	public:
		K_Event getEvent() const { return m_EventItem; }
		K_Operation getOperation() const { return m_EventOperation; }

	private:
		K_Event m_EventItem;
		K_Operation m_EventOperation;
	};

	typedef void (*OnEventChange)(KeyboardEvent event);

	class KeyboardEventHandler
	{
		public:
			KeyboardEventHandler(GLFWwindow* window);
			KeyboardEventHandler(GLFWwindow* window, OnEventChange func);

		public:
			void addOnEventChangeFunc(OnEventChange func);

			void pollEvents();
			std::array<K_Operation, 93> getCachedEvents() const { return m_CachedEvents; }
			static unsigned int getKeyIndex(K_Event event);

		private:
			K_Operation getKeyStatus(unsigned int glfwKeyId) const;
			void placeEvent(unsigned int glfwKeyId,
				K_Event id, unsigned int index,
				std::vector<KeyboardEvent>& events);

		private:
			GLFWwindow* m_Window;
			std::array<K_Operation, 93> m_CachedEvents;
			OnEventChange m_OnEventChange;
	};
}

#endif