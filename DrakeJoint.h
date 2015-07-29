#ifndef DRAKEJOINT_H
#define DRAKEJOINT_H

#include <Eigen/Core>
#include <unsupported/Eigen/AutoDiff>

using namespace Eigen;

class DrakeJoint
{
public:
  virtual Matrix<double, Dynamic, Dynamic> qdotToV(
          const Ref<const Matrix<double, Dynamic, 1>> & q) const = 0;

  virtual Matrix<AutoDiffScalar<VectorXd>, Dynamic, Dynamic> qdotToV(
          const Ref<const Matrix<AutoDiffScalar<VectorXd>, Dynamic, 1>> & q) const = 0;
};

#endif