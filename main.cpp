#include "Chat.h"
#include "iostream"

int main()
{
	Chat chat;

	chat.start();

	while (chat.chatOn()) {

		chat.showLoginMenu();
		while (chat.checkLogin())
		{
			chat.showUserMenu();
		}
	}
	return 0;
}
