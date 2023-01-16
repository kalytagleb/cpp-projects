#include <iostream>
#include <vector>

namespace EventSystem {
    class Event;

    class System {
    private:
        std::string name;
        int32_t descriptor;
        int16_t index;
        bool active;
        std::vector<Event*> events;
    public:
        System(std::string);
        ~System();

    };

    class Event {

    };

    class keyboardEvent : public Event {

    };
}

int main (int argc, char** argv) {
    (void)argc;
    (void)argv;
    return 0;
}