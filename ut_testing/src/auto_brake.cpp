#include <iostream>

class SpeedUpdate {
    double velocity_mps;
};

class CarDetected {
    double distance_m;
    double velocity_mps;
};

class BrakeCommand {
    double time_to_collision_s;
};

template <typename T>
class AutoBrake {
   private:
    const T& publish;
    double   collision_threshold_s;
    double   speed_ms;

   public:
    AutoBrake(const T& publish) : publish{publish} {}

    void observe(const SpeedUpdate& cd) {}

    void observe(const CarDetected& cd) {}

    void set_collision_threshold_s(double x)
    {
        this->collision_threshold_s = x;
    }

    double get_collision_threshold_s() const {
        return this->collision_threshold_s;
    }

    double get_speed_mps() const {
        return this->get_speed_mps;
    }
};

int
main()
{
    std::cout << "Hello world" << std::endl;
    return 1;
}