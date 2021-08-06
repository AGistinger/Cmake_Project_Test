# Sets the minimum viable cmake version for project
cmake_minimum_required(VERSION 3.0.0)

# Sets PROJECT_NAME value and VERSION value
project(Cmake_Project_Test VERSION 0.1.0)

# Include CTest, you have the option to use cmake to build and execute tests
include(CTest)

# enable_testing allows you to use the executable 'test' or RUN_TESTS
# that will run all tests that were included using add_test( testname executablename arg1 arg2...)  in the makefile
enable_testing()

# CPack is used to efficiently package programs with more complex build trees. 
# If a project requires INSTALL_* in the project anywhere, CPack is required to package the build requirements
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${VERSION})
include(CPack)

# Specifies a path to native header files.
# CMAKE_CURRENT_SOURCE points to the directly that already being used by CMake
include_directories( PRIVATE ${PROJECT_NAME}
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# Sets SOURCES to be used for creating the executable
# If files are in folders the directory must be added to include directories
# and the file folder should be included ex) src/main.cpp
set(SOURCES 
    src/main.cpp 
    src/PolyAccount.cpp 
    src/PolyChecking.cpp 
    src/PolyMenu.cpp 
    src/PolyPrint.cpp 
    src/PolySavings.cpp 
    src/PolyTrust.cpp 
    src/PolyUtil.cpp 
    inc/PolyAccount.h 
    inc/PolyChecking.h 
    inc/PolyMenu.h 
    inc/PolyPrint.h 
    inc/PolySavings.h 
    inc/PolyTrust.h 
    inc/PolyUtil.h)

# Sets which project to make the executable for and the sources(files) to use
add_executable(${PROJECT_NAME} ${SOURCES})