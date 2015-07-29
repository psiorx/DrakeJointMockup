#include <iostream>
#include "FixedAxisOneDofJoint.h"

using namespace std;

int main()
{
  FixedAxisOneDoFJoint fjoint;
  const DrakeJoint& joint = fjoint;

  VectorXd q_double(1);
  q_double[0] = 2.0;

  Matrix<AutoDiffScalar<VectorXd>, Dynamic, 1> q_autodiff(1);
  q_autodiff[0] = 2.0;

  cout << joint.qdotToV(q_double.derived()) << endl;
  cout << joint.qdotToV(q_autodiff.derived()).value() << endl;

  return 0;
}