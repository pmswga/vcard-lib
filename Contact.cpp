//
// Created by pmswga on 13.10.2020.
//

#include "Contact.h"

namespace vCard
{

    Contact::Contact()
    {

    }

    Contact::Contact(const Contact &contact)
    {
        this->secondName = contact.secondName;
        this->firstName = contact.firstName;
        this->patronymic = contact.patronymic;
    }

    Contact::~Contact()
    {

    }

    int Contact::getId()
    {
        return id;
    }

    void Contact::setId(unsigned int newId)
    {
        this->id = newId;
    }

    string Contact::getFirstName()
    {
        return firstName;
    }

    void Contact::setFirstName(const string newFirstName)
    {
        this->firstName = newFirstName;
    }

    string Contact::getSecondName()
    {
        return secondName;
    }

    void Contact::setSecondName(const string newSecondName)
    {
        this->secondName = newSecondName;
    }

    string Contact::getPatronymic()
    {
        return patronymic;
    }

    void Contact::setPatronymic(const string newPatronymic)
    {
        this->patronymic = newPatronymic;
    }

}
