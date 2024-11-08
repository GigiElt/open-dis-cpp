#ifndef UTILS_H
#define UTILS_H

namespace DIS {

const double PI = 3.14159265358979;

class Utils
{
public:
    /**
     * @brief getOrientationFromEuler
     * @param lat should be expressed in radians
     * @param lon should be expressed in radians
     * @param psi shall follow Tait-Bryan angle convention in the XYZ
     * @param theta shall follow Tait-Bryan angle convention in the XYZ
     * @return 
     */
    static double getOrientationFromEuler(double lat, double lon, double psi, double theta);

    /**
     * @brief getPitchFromEuler
     * @param lat should be expressed in radians
     * @param lon should be expressed in radians
     * @param psi shall follow Tait-Bryan angle convention in the XYZ
     * @param theta shall follow Tait-Bryan angle convention in the XYZ
     * @return 
     */
    static double getPitchFromEuler(double lat, double lon, double psi, double theta);

    /**
     * @brief getRollFromEuler
     * @param lat should be expressed in radians
     * @param lon should be expressed in radians
     * @param psi shall follow Tait-Bryan angle convention in the XYZ
     * @param theta shall follow Tait-Bryan angle convention in the XYZ
     * @param phi shall follow Tait-Bryan angle convention in the XYZ
     * @return 
     */
    static double getRollFromEuler(double lat, double lon, double psi, double theta, double phi);

    static double radToDeg(double rad) { return rad * (180 / PI); };
    static double degToRad(double deg) { return deg * (PI / 180); };
};
} // namespace DIS
#endif // UTILS_H
