#pragma once
#include <exception>

//�� �ࠢ��쭮�� ������ �� ��ࠢ�� �ਢ�⭮�� ᮮ�饭��
class BadLoginMessage : public std::exception
{
public:
	virtual const char* what() const noexcept override
	{
		return "User with this login does not exist";
	}
};
