cmake_minimum_required ( VERSION 3.14 )
project( QtnProperty )

include ( cmake/warnings.cmake )

add_library ( cppwarnings INTERFACE )
add_library ( cppfeatures INTERFACE )

set_project_warinigs( cppwarnings )
target_compile_features( cppfeatures INTERFACE cxx_std_17 )

add_library( QtnProperty src/dump.cpp)


find_package(Qt5 COMPONENTS Widgets Core REQUIRED)

target_link_libraries ( QtnProperty PRIVATE cppfeatures cppwarnings)


add_subdirectory( Core )
#add_subdirectory( PEG )
#add_subdirectory( PropertyWidget )
#add_subdirectory( Demo )

target_link_libraries( QtnProperty PRIVATE Core)
target_include_directories( QtnProperty PUBLIC Core )
