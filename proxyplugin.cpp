#include "proxyplugin.h"

#include "proxyapplication.h"

ProxyPlugin::ProxyPlugin(QObject *parent) :
    WebPlugin(parent)
{

}

QString ProxyPlugin::pluginName() const
{
    return QStringLiteral("proxy");
}

WebApplication *ProxyPlugin::createApplication(const QJsonObject &config) const
{
    return new ProxyApplication(config);
}
