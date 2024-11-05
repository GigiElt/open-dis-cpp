#ifndef UTILS_H
#define UTILS_H

namespace DIS {

const double PI = 3.14159265358979;

class Utils
{
public:
    static double getOrientationFromEuler(double lat, double lon, double psi, double theta);

    static double getPitchFromEuler(double lat, double lon, double psi, double theta);

    static double getRollFromEuler(double lat, double lon, double psi, double theta, double phi);

    static double radToDeg(double rad) { return rad * (180 / PI); };
    static double degToRad(double deg) { return deg * (PI / 180); };
};
} // namespace DIS
#endif // UTILS_H