#include "client.h"

namespace net {
    Client::Client() {
    }

    Connection Client::connect(uint16_t port) {
        return socket.connect(port);
    }

    Connection Client::connect(std::string destination, int port) {
        return socket.connect(destination, port);
    }
}