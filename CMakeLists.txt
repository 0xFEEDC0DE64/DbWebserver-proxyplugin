set(HEADERS
    proxyapplication.h
    proxyplugin.h
)

set(SOURCES
    proxyapplication.cpp
    proxyplugin.cpp
)

set(OTHER_FILES
    proxyplugin.json
)

add_library(webserver-plugins-proxyplugin SHARED ${HEADERS} ${SOURCES} ${OTHER_FILES})

set_target_properties(webserver-plugins-proxyplugin PROPERTIES OUTPUT_NAME proxyplugin PREFIX "")

target_link_libraries(webserver-plugins-proxyplugin Qt5::Core Qt5::Network webserverlib)

add_dependencies(webserver-plugins webserver-plugins-proxyplugin)
