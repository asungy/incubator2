# Export compile commands (for LSP use).
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# Copy compile commands to root directory.
#
# Reference: https://stackoverflow.com/a/60910583
add_custom_target(
    do_always ALL
    ${CMAKE_COMMAND} -E copy_if_different
    ${CMAKE_BINARY_DIR}/compile_commands.json
    ${CMAKE_SOURCE_DIR}
)

add_subdirectory(driver)

set(TARGET_NAME ${PROJECT_NAME})
set(ENTRYPOINT
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)
add_executable(${TARGET_NAME}
    ${ENTRYPOINT}
)
target_link_libraries(${TARGET_NAME}
    driver
)

set_target_properties(${TARGET_NAME} PROPERTIES
    CMAKE_EXPORT_COMPILE_COMMANDS ON
)
