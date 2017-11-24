project(primary)


add_library(libprimary STATIC ${SOURCE_FILES})
target_include_directories(libprimary PUBLIC .)

add_executable(primary ${SOURCE_FILES} main.cpp)

target_link_libraries(primary libprimary)