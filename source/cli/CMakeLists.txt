set(TARGET_NAME "cli")

set(HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/include/cli/cli.hpp
)

set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/intern/cli.cpp
)

add_library(${TARGET_NAME}
    ${HEADERS}
    ${SOURCES}
)

target_include_directories(${TARGET_NAME}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(${TARGET_NAME} PROPERTIES
    CMAKE_EXPORT_COMPILE_COMMANDS ON
    CMAKE_EXPORT_COMPILE_COMMANDS_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/include
)
# include(FetchContent)
# FetchContent_Populate(
#     cli11_proj
#     QUIET
#     GIT_REPOSITORY https://github.com/CLIUtils/CLI11.git
#     GIT_TAG v2.3.2
#     SOURCE_DIR     cli11_proj
# )
#
# FetchContent_MakeAvailable(cli11)
#
# # And now you can use it
# add_subdirectory(${cli11_proj_SOURCE_DIR} ${cli11_proj_SOURCE_DIR}/build)
# target_link_libraries(<your project> CLI11::CLI11)
