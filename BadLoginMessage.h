#pragma once
#include <exception>

//Не правильного логина при отправке приватного сообщения
class BadLoginMessage : public std::exception
{
public:
	virtual const char* what() const noexcept override
	{
		return "User with this login does not exist";
	}
};
