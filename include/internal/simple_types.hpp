//
// Created by max on 03.01.24.
//
#ifndef SIMPLESOCKET_SIMPLE_TYPES_HPP
#define SIMPLESOCKET_SIMPLE_TYPES_HPP


#if __linux__
#include "linux_details.hpp"
#elif _WIN32
    #error "Platform not implemented"
#else
#error "Platform not implemented"
#endif

namespace simple {
enum class address_family {
    UNIX,
    LOCAL,
    INET,
    INET6,
    PACKET,
    UNSPEC, // allow ipv4 or ipv6
};
enum class socket_type {
    TCP,
    UDP,
};

}
#endif //SIMPLESOCKET_SIMPLE_TYPES_HPP
