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

/*
 * SWGCurrency.h
 *
 * some description 
 */

#ifndef SWGCurrency_H_
#define SWGCurrency_H_

#include <QJsonObject>
#include <QStringList>



#include "SWGObject.h"

namespace Swagger {

class SWGCurrency: public SWGObject {
public:
    SWGCurrency();
    SWGCurrency(QString const &json);
    virtual ~SWGCurrency();
    void init();
    void cleanup();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject const &json) override;
    void fromJson(QString const &jsonString) override;


    virtual bool isSet() const override;

private:
};

}

#endif /* SWGCurrency_H_ */
