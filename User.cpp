#include <string>
#include "User.h"

//�������� ���짮��⥫� � ������묨 ��ࠬ��ࠬ�
User::User(const std::string& login, const std::string& password) : _login(login), _password(password)
{

}

//������ ������ ���짮��⥫�
const std::string User::getUserLogin() const
{
    return _login;
}

//������ ��஫� ���짮��⥫�
std::string User::getUserPassword() const
{
    return _password;
}
