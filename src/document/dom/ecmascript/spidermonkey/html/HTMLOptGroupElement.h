#ifndef EL__DOCUMENT_DOM_ECMASCRIPT_SPIDERMONKEY_HTML_HTMLOPTGROUPELEMENT_H
#define EL__DOCUMENT_DOM_ECMASCRIPT_SPIDERMONKEY_HTML_HTMLOPTGROUPELEMENT_H

#include "document/dom/ecmascript/spidermonkey/html/HTMLElement.h"
#include "ecmascript/spidermonkey/util.h"

extern const JSClass HTMLOptGroupElement_class;
extern const JSFunctionSpec HTMLOptGroupElement_funcs[];
extern const JSPropertySpec HTMLOptGroupElement_props[];

struct OPTGROUP_struct {
	struct HTMLElement_struct html;
	unsigned char *disabled;
	unsigned char *label;
};

#endif