#ifndef _DDCD_RESOURCE_REQUEST_
#define _DDCD_RESOURCE_REQUEST_

#include <string>
#include <pthread.h>

#include <regional-master/kernel/Client.hpp>
#include <regional-master/utils.hpp>

int requestResource(const std::string& resource_name, std::string* response, std::string* resource_location, int timeout = 60);

#endif