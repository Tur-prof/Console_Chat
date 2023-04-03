#include "Message.h"

//�������� ᮮ�饭�� � ������묨 ��ࠬ��ࠬ�
Message::Message(const std::string& from, const std::string& to, const std::string& text) : _from(from), _to(to), _text(text)
{
}

//������ ������ ��ࠢ�⥫� ᮮ�饭��
const std::string Message::getFrom() const
{
    return _from;
}

//������ ������ �����⥫� ᮮ�饭��
const std::string Message::getTo() const
{
    return _to;
}

//������ ⥪�� ᮮ�饭��
const std::string Message::getText() const
{
    return _text;
}
