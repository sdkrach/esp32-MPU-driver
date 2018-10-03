cmake_minimum_required(VERSION 3.5)

get_filename_component(DEV_ROOT "${CMAKE_CURRENT_SOURCE_DIR}" ABSOLUTE)
set(SUBMODULE_ROOT "${DEV_ROOT}/../../../")

set(EXTRA_COMPONENT_DIRS "${EXTRA_COMPONENT_DIRS} ${SUBMODULE_ROOT}")

include($ENV{ESP_IDF}/tools/cmake/project.cmake)

project(mpu-spi-example)