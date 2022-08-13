cmake_minimum_required(VERSION 3.0.0)
project(book_rental_service VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(CTest)
enable_testing()

add_executable(book_rental_service main.cpp Auth.cpp Book.cpp BookInventoryCoordinator.cpp Menu.cpp Me.cpp)



set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
