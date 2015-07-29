#ifndef FIXEDAXISONEDOFJOINT_H
#define FIXEDAXISONEDOFJOINT_H

#include "DrakeJointImpl.h"

class FixedAxisOneDoFJoint : public DrakeJointImpl<FixedAxisOneDoFJoint>
{
public:
  FixedAxisOneDoFJoint() : DrakeJointImpl<FixedAxisOneDoFJoint>(*this) { }

  template<typename DerivedQ>
  Matrix<typename DerivedQ::Scalar, Dynamic, Dynamic> qdotToV(const Ref<const MatrixBase<DerivedQ>> & q) const
  {
    Matrix<typename DerivedQ::Scalar, Dynamic, Dynamic> ret(1, 1);
    ret.setIdentity();
    return ret;
  };
};

#endif