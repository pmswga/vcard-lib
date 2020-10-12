//
// Created by pmswga on 13.10.2020.
//

#ifndef VCARD_LIB_CONTACTLIST_H
#define VCARD_LIB_CONTACTLIST_H

#include "Contact.h"
#include <vector>
using namespace std;

namespace vCard
{

    typedef vector<Contact*> Contacts; ///< Short type definition

    /**
     * @enum GetBy
     * @brief Using for get contact by unique field
     */
    enum GetBy {
        BY_ID    = 1, ///< By identificator
        BY_EMAIL = 2  ///< By email
    };

/**
 * @class ContactList
 * @brief Raw contact list
 * @namespace vCard
 */
class ContactList {
    Contacts list;

public:

    /**
     * Constructor
     */
    ContactList();

    /**
     * Copy constructor
     * @param list
     */
    ContactList(const Contacts &list);

    /**
     * Destructor
     */
    ~ContactList();

    /**
     * Add new contact
     * @param Contact
     * @return void
     */
    void add(Contact *newContact);

    /**
     * Remove contact by identitficator
     * @return void
     */
    void remove(unsigned int id);

    /**
     * Remove contact by email
     * @param email
     */
    void remove(const string email);

    /**
     * Get contact by GetBy enum
     * @param getBy
     * @return Contact
     */
    Contact* getBy(GetBy getBy);

    /**
     * Return contact list
     * @return Contacts
     */
    Contacts getList();

};


}


#endif //VCARD_LIB_CONTACTLIST_H
