//
// Created by pmswga on 13.10.2020.
//

#include "ContactList.h"

namespace vCard
{

    ContactList::ContactList()
    {

    }

    ContactList::ContactList(const Contacts &list)
    {

    }

    ContactList::~ContactList()
    {
        for (auto i = list.begin(); i != list.end(); i++) {

        }
    }

    void ContactList::add(Contact *newContact)
    {
        list.push_back(newContact);
    }

    void ContactList::remove(unsigned int id)
    {
        for (Contacts::iterator i = list.begin(); i != list.end(); i++)
        {
            if ((*i)->getId() == id) {
                list.erase(i);
            }
        }
    }

    void ContactList::remove(const string email)
    {
        //Code here
    }

    Contact* ContactList::getBy(GetBy getBy)
    {
        switch (getBy)
        {
            case BY_EMAIL:
            {

            } break;
            default:
                return nullptr;
        }

        return nullptr;
    }

    Contacts ContactList::getList()
    {
        return list;
    }

}

