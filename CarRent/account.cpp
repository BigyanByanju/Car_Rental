#include "account.h"

account::account()
{
    username = "";
    password = "";
}

account::account(QString x, QString y)
{
    username = x;
    password = y;
}
