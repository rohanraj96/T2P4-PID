#ifndef PID_H
#define PID_H

class PID {

public:

  double p_error;
  double i_error;
  double d_error;

  double kp;
  double ki;
  double kd;

  PID();

  virtual ~PID();

  void Init(double Kp, double Ki, double Kd);

  void UpdateError(double cte);

  double TotalError();
};

#endif
