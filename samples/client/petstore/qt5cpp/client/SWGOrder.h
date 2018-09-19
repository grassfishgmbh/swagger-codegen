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
 * SWGOrder.h
 *
 * An order for a pets from the pet store
 */

#ifndef SWGOrder_H_
#define SWGOrder_H_

#include <QJsonObject>
#include <QStringList>


#include <QDateTime>
#include <QString>

#include "SWGObject.h"

namespace Swagger {

class SWGOrder: public SWGObject {
public:
    SWGOrder();
    SWGOrder(QString const &json);
    virtual ~SWGOrder();
    void init();
    void cleanup();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject const &json) override;
    void fromJson(QString const &jsonString) override;

    
    qint64 getId() const;
    void setId(qint64 const &id);

    
    qint64 getPetId() const;
    void setPetId(qint64 const &pet_id);

    
    qint32 getQuantity() const;
    void setQuantity(qint32 const &quantity);

    
    QDateTime getShipDate() const;
    void setShipDate(QDateTime const &ship_date);

    enum status { 
        status_SWGUndefined=-1,
        status_placed,
        status_approved,
        status_delivered
    };
    status getStatus() const;
    void setStatus(status const &status);
    
    bool isComplete() const;
    void setComplete(bool const &complete);


    virtual bool isSet() const override;

private:
    
    qint64 id;
    bool id_isSet;

    
    qint64 pet_id;
    bool pet_id_isSet;

    
    qint32 quantity;
    bool quantity_isSet;

    
    QDateTime ship_date;

    static QStringList data_status;
    status status;

    
    bool complete;
    bool complete_isSet;

};

}

#endif /* SWGOrder_H_ */
