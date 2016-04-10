#include "dollars.h"

Dollars::Dollars() {
  setCurrName("Dollars");
  setCentName("Cents");
  setCurrNum(0);
  setCentNum(0);
}

Dollars::Dollars(int currNum, int centNum) {
  setCurrName("Dollars");
  setCentName("Cents");
  setCurrNum(currNum);
  setCentNum(centNum);
}

Dollars Dollars::operator+(Dollars d) {
  Dollars obj;
  obj.currNum = currNum + d.currNum;
  obj.centNum = centNum + d.centNum;
  if (obj.centNum > 99) {
    obj.centNum -= 100;
    obj.currNum += 1;
  }
  return obj;
}

Dollars Dollars::operator-(Dollars d) {
  Dollars obj;
  obj.currNum = currNum - d.currNum;
  obj.centNum = centNum - d.centNum;
  // Implement logic here
}
