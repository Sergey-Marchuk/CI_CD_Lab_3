project(factorial)
# Build factorial as the library target
add_library(factorial factorial.cpp)

# Find gtest
find_package(GTest REQUIRED)
include_directories( ${GTEST_INCLUDE_DIRS} )
enable_testing()
# Find POSIX threads for UNIX
find_package(Threads REQUIRED)
# Build test
add_executable(factorialTest factorialTest.cpp)
target_link_libraries(factorialTest factorial ${GTEST_LIBRARIES} Threads::Threads)
