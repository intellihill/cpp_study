#include <iostream>
using namespace std;

class USBDevice {
private:
    long m_id;

public:
    USBDevice(long id): m_id(id) {}

    long getId() {
        return m_id;
    }

    void plugAndPlay() {}
};

class NetworkDevice {
private:
    long m_id;
public:
    NetworkDevice(long id): m_id(id) {}

    long getId() {
        return m_id;
    }

    void networking() {}
};

class USBNetworkDevice: public USBDevice, public NetworkDevice {
public:
    USBNetworkDevice(long usb_id, long net_id): USBDevice(usb_id), NetworkDevice(net_id) {}
};


int main() {
    USBNetworkDevice my_device(3.14, 6.022);

    my_device.networking();
    my_device.plugAndPlay();

    // getId는 문제가있음
    // my_device.getId();
    my_device.USBDevice::getId();
    my_device.NetworkDevice::getId();

    return 0;
}