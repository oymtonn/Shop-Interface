cmake_minimum_required(VERSION 3.30)
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