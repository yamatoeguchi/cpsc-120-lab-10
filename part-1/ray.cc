
#include "ray.h"

Point3 Ray::origin() const { 
  // TODO: Complete this method
}

Vec3 Ray::direction() const {
  // TODO: Complete this method
}

Point3 Ray::at(double t) const {
  // TODO: Complete this method
}

std::ostream& operator<<(std::ostream& out, const Ray& r) {
  out << "Ray(origin=" << r.origin() << ", direction=" << r.direction() << ")";
  return out;
}
