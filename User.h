#pragma once
#include <string>

class User
{
    const std::string _login;
    std::string _password;

public:
    User(const std::string& login, const std::string& password);

    const std::string getUserLogin() const;
    std::string getUserPassword() const;

    ~User() = default;
};
