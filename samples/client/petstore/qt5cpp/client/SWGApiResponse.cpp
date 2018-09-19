/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGApiResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {



SWGApiResponse::SWGApiResponse(QString const &json) {
    init();
    this->fromJson(json);
}

SWGApiResponse::SWGApiResponse() {
    init();
}

SWGApiResponse::~SWGApiResponse() {
    this->cleanup();
}

void SWGApiResponse::init() {
    code = 0;
    code_isSet = false;}

void SWGApiResponse::cleanup() {
}

void SWGApiResponse::fromJson(QString const &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void SWGApiResponse::fromJsonObject(QJsonObject const &pJson) {
    mGenericData = pJson;
    
    code_isSet = pJson.contains("code");
    code = fromJsonValue<qint32>(pJson["code"]);


    type = fromJsonValue<QString>(pJson["type"]);


    message = fromJsonValue<QString>(pJson["message"]);

}

QString SWGApiResponse::asJson () const
{
    QJsonObject const obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject SWGApiResponse::asJsonObject() const {
    QJsonObject obj;
    
    obj.insert("code", QJsonValue(code));

    obj.insert("type", toJsonValue(type));

    obj.insert("message", toJsonValue(message));

    return obj;
}


qint32 SWGApiResponse::getCode() const {
    return code;
}
void SWGApiResponse::setCode(qint32 const &code) {
    this->code = code;
    this->code_isSet = true;
}


QString SWGApiResponse::getType() const {
    return type;
}
void SWGApiResponse::setType(QString const &type) {
    this->type = type;
}


QString SWGApiResponse::getMessage() const {
    return message;
}
void SWGApiResponse::setMessage(QString const &message) {
    this->message = message;
}


bool SWGApiResponse::isSet() const{
    bool isObjectUpdated = false;
    do{
        
        if(code_isSet){ isObjectUpdated = true; break;}
        
        if(!type.isNull()){ isObjectUpdated = true; break;}
        
        if(!message.isNull()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

