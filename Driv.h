#ifndef Driv_h
#define Driv_h

#include "Arduino.h"

class Driv {

public:

Driv(int leftP = 3, int left1 = 4, int left2 = 5, int right1 = 6, int right2 = 7, int rightP = 9);

  void drividy(float LD, float RD);


private:



int _leftP;
int _left1;
int _left2;
int _right1;
int _right2;
int _rightP;


};

#endif
