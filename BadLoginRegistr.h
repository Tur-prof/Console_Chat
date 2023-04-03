#pragma once
#include <exception>

//�� �ࠢ���� ����� �� ॣ����樨
class BadLoginRegistr : public std::exception
{
public:
	virtual const char* what() const noexcept override
	{
		return "This username is taken, please try another one";
	}
};