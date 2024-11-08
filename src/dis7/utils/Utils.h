#ifndef UTILS_H
#define UTILS_H

namespace DIS {

const double PI = 3.14159265358979;

class Utils
{
public:
    /**
     * @brief getOrientationFromEuler
     * @param lat latitude expressed in radians
     * @param lon longitude expressed in radians
     * @param psi X angle part of Tait-Bryan XYZ convention expressed in radians
     * @param theta Y angle part of Tait-Bryan XYZ convention expressed in radians
     * @return 
     */
    static double getOrientationFromEuler(double lat, double lon, double psi, double theta);

    /**
     * @brief getPitchFromEuler
     * @param lat latitude expressed in radians
     * @param lon longitude expressed in radians
     * @param psi X angle part of Tait-Bryan XYZ convention expressed in radians
     * @param theta Y angle part of Tait-Bryan XYZ convention expressed in radians
     * @return 
     */
    static double getPitchFromEuler(double lat, double lon, double psi, double theta);

    /**
     * @brief getRollFromEuler
     * @param lat latitude expressed in radians
     * @param lon longitude expressed in radians
     * @param psi X angle part of Tait-Bryan XYZ convention expressed in radians
     * @param theta Y angle part of Tait-Bryan XYZ convention expressed in radians
     * @param phi Z angle part of Tait-Bryan XYZ convention expressed in radians
     * @return 
     */
    static double getRollFromEuler(double lat, double lon, double psi, double theta, double phi);

    static double radToDeg(double rad) { return rad * (180 / PI); };
    static double degToRad(double deg) { return deg * (PI / 180); };
};
} // namespace DIS
#endif // UTILS_H
