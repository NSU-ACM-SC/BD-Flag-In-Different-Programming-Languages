# Drawing the national flag of Bangladesh
> Using OpenGL and C++

## Required Libraries
- OpenGL 4.2 (minimum)
- GLUT

## Building

### macOS using Xcode
Open the `BD Flag OpenGL.xcodeproj`, add OpenGL and GLUT libraries from project properties. Build and Run.

### macOS from command line
Use `-framework GLUT -framework OpenGL` flag while compiling from command line (macOS only).

```bash
cd "BD Flag OpenGL"
# compile
clang++ main.cpp -o main -framework GLUT -framework OpenGL
# run
./main
```

**Ignore the warnings since OpenGL has been deprecated in latest versions of macOS.**

### On Linux from command line
Use the flags provided by the opengl and glut libs built for your distro.

### On Windows using Visual Studio
On Windows, install GLUT and add headers and linkers to your project in Visual Studio.

### Using CLion (macOS, Linux)
If you're using CLion and/or building using `CMAKE`, then use the following config for your `cmake.txt` file

```cpp
cmake_minimum_required(VERSION 3.6)
project(project_name)

set(CMAKE_CXX_STANDARD 11)

if(APPLE)
    find_package(OpenGL REQUIRED)
    include_directories(${OpenGL_INCLUDE_DIRS})
    find_package(GLUT REQUIRED)
    include_directories(${GLUT_INCLUDE_DIRS})

    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -framework GLUT -framework OpenGL")
else()
    set(CMAKE_CXX_LINK_EXECUTABLE "${CMAKE_CXX_LINK_EXECUTABLE} -lGL -lGLU -lglut")
endif()

add_executable(project_name ${SOURCE_FILES})
```

## Screenshot
![Imgur](https://i.imgur.com/0FpVsUY.png)
