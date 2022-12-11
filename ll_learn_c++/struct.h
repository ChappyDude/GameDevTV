#pragma once

#ifndef COW_H
#define COW_H
#include <string>

enum cow_purpose {
    dairy,
    meat,
    hide,
    pet
};

class cow
{
public:
    cow(std::string name_init, int age_init, unsigned char purpose_init);
    std::string get_name();
    int get_age();
    unsigned char get_purpose();
    void set_age(int new_age);
private:
    std::string name;
    int age;
    unsigned char purpose;
};
#endif // COW_H