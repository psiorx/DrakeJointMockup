#ifndef DRAKEJOINTIMPL_H
#define DRAKEJOINTIMPL_H

#include "DrakeJoint.h"
#include <iostream>
using namespace std;

template<typename Derived>
class DrakeJointImpl : public DrakeJoint
{
private:
  Derived& derived;

public:
  DrakeJointImpl(Derived& derived) : derived(derived) { }

  virtual Matrix<double, Dynamic, Dynamic> qdotToV(
  	const Ref<const Matrix<double, Dynamic, 1>> & q) const
  {
  	cout << "calling derived method with double scalar" << endl;
  	return derived.qdotToV(q);
  };
  
  virtual Matrix<AutoDiffScalar<VectorXd>, Dynamic, Dynamic> qdotToV(
  	const Ref<const Matrix<AutoDiffScalar<VectorXd>, Dynamic, 1>> & q) const
  {
  	cout << "calling derived method with autodiff scalar" << endl;
  	return derived.qdotToV(q);
  };

};

#endif