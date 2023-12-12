set(TARGET_NAME "cmdline")

set(HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/include/cmdline/cmdline.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/intern/subcommands/subcommands.hpp
)

set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/intern/cmdline.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/intern/subcommands/run.cpp
)

include(FetchContent)
FetchContent_Declare(
    cli11
    GIT_REPOSITORY https://github.com/CLIUtils/CLI11.git
    GIT_TAG v2.3.2
)
FetchContent_MakeAvailable(cli11)

add_library(${TARGET_NAME}
    ${HEADERS}
    ${SOURCES}
)

target_include_directories(${TARGET_NAME}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/intern
)

set_target_properties(${TARGET_NAME} PROPERTIES
    CMAKE_EXPORT_COMPILE_COMMANDS ON
    CMAKE_EXPORT_COMPILE_COMMANDS_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/include
)
target_link_libraries(${TARGET_NAME} CLI11::CLI11)
