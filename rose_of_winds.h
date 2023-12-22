#ifndef ROSE_OF_WINDS_H
#define ROSE_OF_WINDS_H

#include "constants.h"

struct Date
{
    int day;
    int month;
};

struct Wind
{
    std::string direction;
    float speed;
};

struct RoseOfWinds
{
    Date date;
    Wind wind;
};

#endif