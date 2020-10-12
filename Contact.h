//
// Created by pmswga on 13.10.2020.
//

#ifndef VCARD_LIB_CONTACT_H
#define VCARD_LIB_CONTACT_H

#include <string>
using namespace std;

namespace vCard
{

/**
 * @class Contact
 * @brief Basic information of contact
 * @namespace vCard
 */
class Contact {
    int id;
    string firstName;
    string secondName;
    string patronymic;

public:
    /**
     * Constructor
     */
    Contact();

    /**
     * Copy constructor
     * @param contact
     */
    Contact(Contact const &contact);

    /**
     * Destructor
     */
    ~Contact();

    int getId();

    void setId(unsigned int newId);

    /**
     * Get first name of contact
     * @return string
     */
    string getFirstName();

    /**
     * Set new first name
     * @param newFirstName
     */
    void setFirstName(const string newFirstName);

    /**
     * Get second name of contact
     * @return string
     */
    string getSecondName();

    /**
     * Set new second name
     * @param newSecondName
     */
    void setSecondName(const string newSecondName);

    /**
     * Get patronymic
     * @return string
     */
    string getPatronymic();

    /**
     * Set new patronymic
     * @param newPatronymic
     */
    void setPatronymic(const string newPatronymic);

};


}


#endif //VCARD_LIB_CONTACT_H
