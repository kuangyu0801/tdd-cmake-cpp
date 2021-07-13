set(BINARY ${CMAKE_PROJECT_NAME})

# GLOB_RECURSE mode will traverse all the subdirectories of the matched directory and match the files.
# LIST_DIRECTORIES false to omit directories
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)

set(SOURCES ${SOURCES})

add_executable(${BINARY}_run ${SOURCES})

add_library(${BINARY}_lib STATIC ${SOURCES})