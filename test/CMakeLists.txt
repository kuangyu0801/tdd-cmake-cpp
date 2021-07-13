# set variable name for binary
set(BINARY ${CMAKE_PROJECT_NAME}_test)

# GLOB_RECURSE mode will traverse all the subdirectories of the matched directory and match the files.
# LIST_DIRECTORIES false to omit directories
file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)

message(${TEST_SOURCES})

set(SOURCES ${TEST_SOURCES})

add_executable(${BINARY} ${SOURCES})

add_test(NAME ${BINARY} COMMAND ${BINARY})

# add src and gtest libraries to test target
target_link_libraries(${BINARY} PUBLIC ${CMAKE_PROJECT_NAME}_lib gtest)