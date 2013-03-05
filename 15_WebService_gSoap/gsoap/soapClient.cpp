/* soapClient.cpp
   Generated by gSOAP 2.8.14 from getIp.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under ONE of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#if defined(__BORLANDC__)
#pragma option push -w-8060
#pragma option push -w-8004
#endif
#include "soapH.h"

SOAP_SOURCE_STAMP("@(#) soapClient.cpp ver 2.8.14 2013-02-28 12:53:44 GMT")


SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetGeoIP(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__GetGeoIP *ns1__GetGeoIP, _ns1__GetGeoIPResponse *ns1__GetGeoIPResponse)
{	struct __ns1__GetGeoIP soap_tmp___ns1__GetGeoIP;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webservicex.net/geoipservice.asmx";
	if (soap_action == NULL)
		soap_action = "http://www.webservicex.net/GetGeoIP";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__GetGeoIP.ns1__GetGeoIP = ns1__GetGeoIP;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__GetGeoIP(soap, &soap_tmp___ns1__GetGeoIP);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__GetGeoIP(soap, &soap_tmp___ns1__GetGeoIP, "-ns1:GetGeoIP", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__GetGeoIP(soap, &soap_tmp___ns1__GetGeoIP, "-ns1:GetGeoIP", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetGeoIPResponse)
		return soap_closesock(soap);
	ns1__GetGeoIPResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__GetGeoIPResponse->soap_get(soap, "ns1:GetGeoIPResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetGeoIPContext(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__GetGeoIPContext *ns1__GetGeoIPContext, _ns1__GetGeoIPContextResponse *ns1__GetGeoIPContextResponse)
{	struct __ns1__GetGeoIPContext soap_tmp___ns1__GetGeoIPContext;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webservicex.net/geoipservice.asmx";
	if (soap_action == NULL)
		soap_action = "http://www.webservicex.net/GetGeoIPContext";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__GetGeoIPContext.ns1__GetGeoIPContext = ns1__GetGeoIPContext;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__GetGeoIPContext(soap, &soap_tmp___ns1__GetGeoIPContext);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__GetGeoIPContext(soap, &soap_tmp___ns1__GetGeoIPContext, "-ns1:GetGeoIPContext", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__GetGeoIPContext(soap, &soap_tmp___ns1__GetGeoIPContext, "-ns1:GetGeoIPContext", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetGeoIPContextResponse)
		return soap_closesock(soap);
	ns1__GetGeoIPContextResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__GetGeoIPContextResponse->soap_get(soap, "ns1:GetGeoIPContextResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetGeoIP_(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__GetGeoIP *ns1__GetGeoIP, _ns1__GetGeoIPResponse *ns1__GetGeoIPResponse)
{	struct __ns1__GetGeoIP_ soap_tmp___ns1__GetGeoIP_;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webservicex.net/geoipservice.asmx";
	if (soap_action == NULL)
		soap_action = "http://www.webservicex.net/GetGeoIP";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__GetGeoIP_.ns1__GetGeoIP = ns1__GetGeoIP;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__GetGeoIP_(soap, &soap_tmp___ns1__GetGeoIP_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__GetGeoIP_(soap, &soap_tmp___ns1__GetGeoIP_, "-ns1:GetGeoIP", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__GetGeoIP_(soap, &soap_tmp___ns1__GetGeoIP_, "-ns1:GetGeoIP", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetGeoIPResponse)
		return soap_closesock(soap);
	ns1__GetGeoIPResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__GetGeoIPResponse->soap_get(soap, "ns1:GetGeoIPResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetGeoIPContext_(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__GetGeoIPContext *ns1__GetGeoIPContext, _ns1__GetGeoIPContextResponse *ns1__GetGeoIPContextResponse)
{	struct __ns1__GetGeoIPContext_ soap_tmp___ns1__GetGeoIPContext_;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webservicex.net/geoipservice.asmx";
	if (soap_action == NULL)
		soap_action = "http://www.webservicex.net/GetGeoIPContext";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__GetGeoIPContext_.ns1__GetGeoIPContext = ns1__GetGeoIPContext;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__GetGeoIPContext_(soap, &soap_tmp___ns1__GetGeoIPContext_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__GetGeoIPContext_(soap, &soap_tmp___ns1__GetGeoIPContext_, "-ns1:GetGeoIPContext", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__GetGeoIPContext_(soap, &soap_tmp___ns1__GetGeoIPContext_, "-ns1:GetGeoIPContext", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetGeoIPContextResponse)
		return soap_closesock(soap);
	ns1__GetGeoIPContextResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__GetGeoIPContextResponse->soap_get(soap, "ns1:GetGeoIPContextResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapClient.cpp */