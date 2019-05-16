#include "Arduino.h"
#include "Driv.h"

Driv::Driv(int leftP = 3, int left1 = 4, int left2 = 5, int right1 = 6, int right2 = 7, int rightP = 9) {
  




_leftP = leftP;
_left1 = left1;
_left2 = left2;
_right1 = right1;
_right2 = right2;
_rightP = rightP;

}

void Driv::drividy(float LD, float RD) {


  analogWrite(_leftP, abs(LD));
  analogWrite(_rightP, abs(RD));

  if (LD > 0) {

    digitalWrite(_left1, HIGH);
    digitalWrite(_left2, LOW);

  } else {


    digitalWrite(_left1, LOW);
    digitalWrite(_left2, HIGH);

  }

  if (RD > 0) {

    digitalWrite(_right1, LOW);
    digitalWrite(_right2, HIGH);

  } else {


    digitalWrite(_right1, HIGH);
    digitalWrite(_right2, LOW);

  }



}
