cmake_minimum_required(VERSION 3.19)
project(SilkyEmu LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets OpenGL)

qt_standard_project_setup()

qt_add_executable(SilkyEmu
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    controllerconfig.ui
    corefetcher.h
    corefetcher.cpp
    corefetcher.ui
)

target_link_libraries(SilkyEmu
    PRIVATE
        Qt::Core
        Qt::Widgets
        Qt::OpenGL
)

install(TARGETS SilkyEmu
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET SilkyEmu
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
