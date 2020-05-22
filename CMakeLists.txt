cmake_minimum_required ( VERSION 3.14 )
project( QtnProperty )

include ( cmake/warnings.cmake )

add_library ( cppwarnings INTERFACE )
add_library ( cppfeatures INTERFACE )

set_project_warinigs( cppwarnings )
target_compile_features( cppfeatures INTERFACE cxx_std_17 )

add_library( QtnProperty STATIC src/dump.cpp)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
find_package(Qt5 COMPONENTS Widgets Core REQUIRED)

target_link_libraries ( QtnProperty PRIVATE cppfeatures cppwarnings)


add_subdirectory( Core )
#add_subdirectory( PEG )
add_subdirectory( PropertyWidget )
#add_subdirectory( Demo )

target_link_libraries( QtnProperty PRIVATE Core PropertyWidget)
target_include_directories( QtnProperty PUBLIC Core PropertyWidget)
