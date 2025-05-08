cmake_minimum_required(VERSION 3.10)

# Explicitly set the OSX SDK path to one that exists on your system
set(CMAKE_OSX_SYSROOT "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk")

project(ShopInterface)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(shop_interface 
    src/main.cpp 
    src/User.cpp 
    src/Item.cpp 
    src/ShopInventory.cpp
    src/DrinkItem.cpp
)

target_include_directories(shop_interface PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)