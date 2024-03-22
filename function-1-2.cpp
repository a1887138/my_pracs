#include <iostream>
#include "Person.h"

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
