cmake_minimum_required(VERSION 3.10)

# mingw clang ninja
# set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# set(CMAKE_C_COMPILER clang)
# set(CMAKE_CXX_COMPILER clang++)

# vcpkg 配置
# set(CMAKE_TOOLCHAIN_FILE "D:/Develop/vcpkg/scripts/buildsystems/vcpkg.cmake")
# set(VCPKG_HOST_TRIPLET x64-windows)
# set(VCPKG_TARGET_TRIPLET x64-windows)


project(main)

add_executable(main main.cpp)

find_package(httplib CONFIG REQUIRED)
target_link_libraries(main PRIVATE httplib::httplib)

#1.配置CMake工程 cmake -B build -G Ninja

#2.1构建工程 cmake --build build

#2.2运行工程 ./build/main.exe

#3.配置其他工具 vcpkg cmake预配置(preset)