project(fctrl)


add_library(libfctrl STATIC ${SOURCE_FILES})
target_include_directories(libfctrl PUBLIC .)

add_executable(fctrl ${SOURCE_FILES} main.cpp)

target_link_libraries(fctrl libfctrl)