#ifndef UTILS_H
#define UTILS_H

const double pi = 3.14159265358979;

namespace DIS {
class Utils
{
public:
    static double getOrientationFromEuler(double lat, double lon, double psi, double theta);

    static double getPitchFromEuler(double lat, double lon, double psi, double theta);

    static double getRollFromEuler(double lat, double lon, double psi, double theta, double phi);

    static double radToDeg(double rad) { return rad * (180 / pi); };
    static double degToRad(double deg) { return deg * (pi / 180); };
};
} // namespace DIS
#endif // UTILS_H
