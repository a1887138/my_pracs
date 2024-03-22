#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int n);
extern PersonList deepCopyPersonList(PersonList pl);

PersonList createPersonList(int n) {

    PersonList new_list;
    new_list.numPeople = n;
    new_list.people = createPersonArray(n);
    return new_list;

}

int main () {

    int number = 5;

    PersonList pl = createPersonList(number);

    PersonList new_pl = deepCopyPersonList(pl);

    std::cout << new_pl.people[0].name << std::endl;

    return 0;
}