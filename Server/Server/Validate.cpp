#include "Validate.h"

bool validIP(string strNameIP) {

    regex ip_pattern("^(([1-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\\.)(([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\\.)(([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\\.)([1-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])$");

    if (regex_match(strNameIP, ip_pattern)) {
        return true;
    }
    else {
        return false;
    }
}

bool validPORT(string strNamePORT) {

    regex port_pattern("^([0-9]{1,4})$");

    if (regex_match(strNamePORT, port_pattern)) {
        return true;
    }
    else {
        return false;
    }
}