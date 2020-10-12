cmake_minimum_required(VERSION 3.17)
project(vcard_lib)

set(CMAKE_CXX_STANDARD 20)

add_library(vcard_lib vcard.cpp vcard.h Contact.cpp Contact.h ContactList.cpp ContactList.h)