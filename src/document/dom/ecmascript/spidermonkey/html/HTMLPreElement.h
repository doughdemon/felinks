#ifndef EL__DOCUMENT_DOM_ECMASCRIPT_SPIDERMONKEY_HTML_HTMLPREELEMENT_H
#define EL__DOCUMENT_DOM_ECMASCRIPT_SPIDERMONKEY_HTML_HTMLPREELEMENT_H

#include "document/dom/ecmascript/spidermonkey/html/HTMLElement.h"
#include "ecmascript/spidermonkey/util.h"

extern const JSClass HTMLPreElement_class;
extern const JSFunctionSpec HTMLPreElement_funcs[];
extern const JSPropertySpec HTMLPreElement_props[];

struct PRE_struct {
	struct HTMLElement_struct html;
	unsigned char *width;
};

#endif