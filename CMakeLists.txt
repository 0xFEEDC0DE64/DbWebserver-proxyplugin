set(HEADERS
    proxyapplication.h
    proxyplugin.h
)

set(SOURCES
    proxyapplication.cpp
    proxyplugin.cpp
)

add_library(proxyplugin SHARED ${HEADERS} ${SOURCES})

target_link_libraries(proxyplugin Qt5::Core Qt5::Network webserverlib)
