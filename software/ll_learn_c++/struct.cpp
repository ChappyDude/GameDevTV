#include "struct.h"

cow::cow(std::string name_init, int age_init, unsigned char purpose_init){
    name = name_init;
    age = age_init;
    purpose = purpose_init;
}
std::string cow::get_name(){
    return name;
}
int cow::get_age(){
    return age;
}
unsigned char cow::get_purpose()
{
    return purpose;
}
void cow::set_age(int new_age){
    age = new_age;
}