/* soapStub.h
   Generated by gSOAP 2.7.17 from shopinterface.h
   Copyright(C) 2000-2010, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#ifndef soapStub_H
#define soapStub_H
#include "stdsoap2.h"

/******************************************************************************\
 *                                                                            *
 * Enumerations                                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes and Structs                                                        *
 *                                                                            *
\******************************************************************************/


#if 0 /* volatile type: do not declare here, declared elsewhere */

#endif

#ifndef SOAP_TYPE_ns1__updateProductsResponse
#define SOAP_TYPE_ns1__updateProductsResponse (9)
/* ns1:updateProductsResponse */
struct ns1__updateProductsResponse
{
public:
	char *_updateProductsReturn;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_ns1__updateProducts
#define SOAP_TYPE_ns1__updateProducts (10)
/* ns1:updateProducts */
struct ns1__updateProducts
{
public:
	char *_pwd;	/* optional element of type xsd:string */
	char *_xmlDoc;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_ns1__updateClassesResponse
#define SOAP_TYPE_ns1__updateClassesResponse (12)
/* ns1:updateClassesResponse */
struct ns1__updateClassesResponse
{
public:
	char *_updateClassesReturn;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_ns1__updateClasses
#define SOAP_TYPE_ns1__updateClasses (13)
/* ns1:updateClasses */
struct ns1__updateClasses
{
public:
	char *_pwd;	/* optional element of type xsd:string */
	char *_xmlDoc;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_ns1__updateStockResponse
#define SOAP_TYPE_ns1__updateStockResponse (15)
/* ns1:updateStockResponse */
struct ns1__updateStockResponse
{
public:
	char *_updateStockReturn;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_ns1__updateStock
#define SOAP_TYPE_ns1__updateStock (16)
/* ns1:updateStock */
struct ns1__updateStock
{
public:
	char *_pwd;	/* optional element of type xsd:string */
	char *_xmlDoc;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_ns1__getOrdersResponse
#define SOAP_TYPE_ns1__getOrdersResponse (18)
/* ns1:getOrdersResponse */
struct ns1__getOrdersResponse
{
public:
	char *_getOrdersReturn;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_ns1__getOrders
#define SOAP_TYPE_ns1__getOrders (19)
/* ns1:getOrders */
struct ns1__getOrders
{
public:
	char *_pwd;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_ns1__getOrderResponse
#define SOAP_TYPE_ns1__getOrderResponse (21)
/* ns1:getOrderResponse */
struct ns1__getOrderResponse
{
public:
	char *_getOrderReturn;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_ns1__getOrder
#define SOAP_TYPE_ns1__getOrder (22)
/* ns1:getOrder */
struct ns1__getOrder
{
public:
	char *_pwd;	/* optional element of type xsd:string */
	char *_xmlDoc;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_ns1__updateOrdersReadResponse
#define SOAP_TYPE_ns1__updateOrdersReadResponse (24)
/* ns1:updateOrdersReadResponse */
struct ns1__updateOrdersReadResponse
{
public:
	char *_updateOrdersReadReturn;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_ns1__updateOrdersRead
#define SOAP_TYPE_ns1__updateOrdersRead (25)
/* ns1:updateOrdersRead */
struct ns1__updateOrdersRead
{
public:
	char *_pwd;	/* optional element of type xsd:string */
	char *_xmlDoc;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (26)
/* SOAP Header: */
struct SOAP_ENV__Header
{
#ifdef WITH_NOEMPTYSTRUCT
private:
	char dummy;	/* dummy member to enable compilation */
#endif
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (27)
/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
public:
	char *SOAP_ENV__Value;	/* optional element of type xsd:QName */
	struct SOAP_ENV__Code *SOAP_ENV__Subcode;	/* optional element of type SOAP-ENV:Code */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (29)
/* SOAP-ENV:Detail */
struct SOAP_ENV__Detail
{
public:
	int __type;	/* any type of element <fault> (defined below) */
	void *fault;	/* transient */
	char *__any;
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (32)
/* SOAP-ENV:Reason */
struct SOAP_ENV__Reason
{
public:
	char *SOAP_ENV__Text;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (33)
/* SOAP Fault: */
struct SOAP_ENV__Fault
{
public:
	char *faultcode;	/* optional element of type xsd:QName */
	char *faultstring;	/* optional element of type xsd:string */
	char *faultactor;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *detail;	/* optional element of type SOAP-ENV:Detail */
	struct SOAP_ENV__Code *SOAP_ENV__Code;	/* optional element of type SOAP-ENV:Code */
	struct SOAP_ENV__Reason *SOAP_ENV__Reason;	/* optional element of type SOAP-ENV:Reason */
	char *SOAP_ENV__Node;	/* optional element of type xsd:string */
	char *SOAP_ENV__Role;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *SOAP_ENV__Detail;	/* optional element of type SOAP-ENV:Detail */
};
#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/

#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
typedef char *_XML;
#endif


/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Server-Side Operations                                                     *
 *                                                                            *
\******************************************************************************/


SOAP_FMAC5 int SOAP_FMAC6 ns1__updateProducts(struct soap*, char *_pwd, char *_xmlDoc, char *&_updateProductsReturn);

SOAP_FMAC5 int SOAP_FMAC6 ns1__updateClasses(struct soap*, char *_pwd, char *_xmlDoc, char *&_updateClassesReturn);

SOAP_FMAC5 int SOAP_FMAC6 ns1__updateStock(struct soap*, char *_pwd, char *_xmlDoc, char *&_updateStockReturn);

SOAP_FMAC5 int SOAP_FMAC6 ns1__getOrders(struct soap*, char *_pwd, char *&_getOrdersReturn);

SOAP_FMAC5 int SOAP_FMAC6 ns1__getOrder(struct soap*, char *_pwd, char *_xmlDoc, char *&_getOrderReturn);

SOAP_FMAC5 int SOAP_FMAC6 ns1__updateOrdersRead(struct soap*, char *_pwd, char *_xmlDoc, char *&_updateOrdersReadReturn);

/******************************************************************************\
 *                                                                            *
 * Server-Side Skeletons to Invoke Service Operations                         *
 *                                                                            *
\******************************************************************************/

SOAP_FMAC5 int SOAP_FMAC6 soap_serve(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_request(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__updateProducts(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__updateClasses(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__updateStock(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__getOrders(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__getOrder(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__updateOrdersRead(struct soap*);

/******************************************************************************\
 *                                                                            *
 * Client-Side Call Stubs                                                     *
 *                                                                            *
\******************************************************************************/


SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__updateProducts(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *_pwd, char *_xmlDoc, char *&_updateProductsReturn);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__updateClasses(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *_pwd, char *_xmlDoc, char *&_updateClassesReturn);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__updateStock(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *_pwd, char *_xmlDoc, char *&_updateStockReturn);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__getOrders(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *_pwd, char *&_getOrdersReturn);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__getOrder(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *_pwd, char *_xmlDoc, char *&_getOrderReturn);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__updateOrdersRead(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *_pwd, char *_xmlDoc, char *&_updateOrdersReadReturn);

#endif

/* End of soapStub.h */