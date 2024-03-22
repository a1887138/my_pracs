#include <iostream>
#include "Person.h"

extern PersonList shallowCopyPersonList(PersonList pl);

Person* createPersonArray(int n) {

    Person* array = new Person[n];

    for (int i = 0; i < n; i++){

        array[i].name = "Jane Doe";
        array[i].age = 1;

    }

    return array;
}

PersonList createPersonList(int n) {

    PersonList new_list;
    new_list.numPeople = n;
    new_list.people = createPersonArray(n);
    return new_list;

}

int main () {

    int number = 5;

    PersonList pl = createPersonList(number);

    PersonList new_pl = shallowCopyPersonList(pl);

    std::cout << new_pl.people[0].name << std::endl;

    return 0;
}