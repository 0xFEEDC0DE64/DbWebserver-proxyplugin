QT += core network

DBLIBS += webserverlib

HEADERS += proxyplugin.h \
    proxyapplication.h

SOURCES += proxyplugin.cpp \
    proxyapplication.cpp

FORMS +=

RESOURCES +=

TRANSLATIONS +=

OTHER_FILES += proxyplugin.json

include(../plugin.pri)
