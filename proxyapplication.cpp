#include "proxyapplication.h"

#include "webserver.h"
#include "httprequest.h"
#include "httpresponse.h"
#include "httpclientconnection.h"

ProxyApplication::ProxyApplication(const QJsonObject &config, WebServer &webServer) :
    WebApplication(&webServer), m_webServer(webServer)
{
    Q_UNUSED(config)
}

void ProxyApplication::start()
{
}

void ProxyApplication::handleRequest(HttpClientConnection *connection, const HttpRequest &request)
{
    HttpResponse response;
    response.protocol = request.protocol;
    response.statusCode = HttpResponse::StatusCode::OK;
    connection->sendResponse(response, "Hello from ProxyApplication: " + request.path);
}
