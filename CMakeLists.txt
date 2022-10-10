cmake_minimum_required(VERSION 3.5)

project(SRunBox LANGUAGES C)

set(APP_ICON_RESOURCE_WINDOWS "${CMAKE_CURRENT_SOURCE_DIR}/icon.rc")
add_executable(SRunBox main.c icon.rc)

install(TARGETS SRunBox
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

