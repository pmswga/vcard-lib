# vCard-lib

This is library allows you to work with vCard 3.0 in your application.

# Architecture

vCard-lib it is static library using in your projects. For example it can be address book.

***Lib contains main classes that dividing on models and controllers:***

| Class of models | Description |
|-------|:----------------------|
| Contact | Basic class contain all information about contact |
| ContactCommunication | Class contain information about links, phones & social networks |
| ContactAvatar | Class contain user image |


| Class of controllers | Description |
|----------------------|:------------|
| vCardCollector | Basic class that collect list of contacts |
| vCardTranslator | Basic class that translate list of contacts to vCard |



# Future releases

## 1.0

***Basic info about contact:***
- secondname
- firstname
- patronymic
- birthday
- list of telephones
- list of emails

***Functions:***
1) add contacts
2) get contacts
3) change contacts
4) remove contacts
5) convert to vCard 

## 1.1 

***Adding new info about contact:***
- avatar
- description
- list of tags

***Functions:***
1) add avatar for contact
2) add description for contact
3) add tags for contact  
1) convert to JSON format
2) convert to XML format




