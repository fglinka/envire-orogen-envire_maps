find_package(LibInit QUIET)
if(LIB_INIT_FOUND)
    init_module(
        SOURCES
            MLSProvider.cpp
            MLTraversabilityMapProvider.cpp
        HEADERS
            MLSProvider.hpp
            MLTraversabilityMapProvider.hpp    
        DEPS_PKGCONFIG
            maps
            lib_init
    )
    
    add_subdirectory(log_replay)
    
endif()
