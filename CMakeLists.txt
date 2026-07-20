cmake_minimum_required(VERSION 3.13...3.27)

include(cmake/pico_sdk_import.cmake)

project(afterburner)

pico_sdk_init()

add_executable(afterburner main.c)

target_link_libraries(
    afterburner
    pico_stdlib
    hardware_adc)

pico_add_extra_outputs(afterburner)