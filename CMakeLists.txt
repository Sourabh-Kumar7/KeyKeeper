cmake_minimum_required(VERSION 3.10)
project(KeyKeeper)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Find the necessary packages
find_package(Qt5 REQUIRED Widgets)
find_package(OpenSSL REQUIRED)

# Include directories
include_directories(include)

# Add executable
add_executable(KeyKeeper
    src/main.cpp
    src/ui/MainWindow.cpp
    src/ui/LoginWindow.cpp
    src/encryption/Encryption.cpp
    src/storage/FileStorage.cpp
    src/security/SecurityUtils.cpp
    src/utils/Utils.cpp
)

# Link libraries
target_link_libraries(KeyKeeper Qt5::Widgets OpenSSL::SSL OpenSSL::Crypto)
