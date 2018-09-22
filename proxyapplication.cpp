#include "proxyapplication.h"

#include "httprequest.h"
#include "httpresponse.h"
#include "httpclientconnection.h"

ProxyApplication::ProxyApplication(const QJsonObject &config, QObject *parent) :
    WebApplication(parent)
{

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
