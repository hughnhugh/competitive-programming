#include <vector>
#include <iostream>

using namespace std;

int main() {
    int* ptr = new int;
    *ptr = 55;
    cout << *ptr << endl;
    delete ptr;

    int *arrPtr = new int[2];
    arrPtr[0] = 3;
    arrPtr[1] = 2;

    cout << arrPtr[0] << endl;
    cout << arrPtr[1] << endl;
    delete[] arrPtr;
}

class FileWrapper {
    FILE* file;
public:
    FileWrapper(const char* filename, const char* mode) {
        file = fopen(filename, mode);
        if (!file) throw std::runtime_error("File opening failed");
    }
    ~FileWrapper() {
        if (file) fclose(file);
    }
    // Prevent copy and assignment
    FileWrapper(const FileWrapper&) = delete;
    FileWrapper& operator=(const FileWrapper&) = delete;
};

class SocketWrapper {
    int sockfd; // Socket file descriptor
public:
    SocketWrapper(int domain, int type, int protocol) {
        sockfd = socket(domain, type, protocol);
        if (sockfd < 0) throw std::runtime_error("Failed to open socket");
    }
    ~SocketWrapper() {
        close(sockfd); // Close the socket
    }
    // Deleted copy constructor and copy assignment operator to prevent copying
    SocketWrapper(const SocketWrapper&) = delete;
    SocketWrapper& operator=(const SocketWrapper&) = delete;
};

#include <iostream>
#include <functional>

class ScopeGuard {
    std::function<void()> onExit;
public:
    ScopeGuard(std::function<void()> func) : onExit(func) {}
    ~ScopeGuard() { onExit(); }
};

void function() {
    ScopeGuard guard([]() { std::cout << "Finally block logic\n"; });
    throw std::runtime_error("Exception thrown");
    // The lambda function passed to ScopeGuard is called here
}

int main() {
    try {
        function();
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << '\n';
    }
    return 0;
}

class Entity {

}

class Player : public Entity {

}