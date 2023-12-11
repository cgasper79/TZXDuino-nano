#include "Timers.h"

#if defined(__AVR__)
  #include <TimerOne.h>

  void TimerClass::stop(void)
  {
    Timer1.stop();                              //Stop timer interrupt
  }

  void TimerClass::setPeriod(unsigned long period)
  {
    Timer1.setPeriod(period);
  }

  void TimerClass::initialize()
  {
    Timer1.initialize(100000);                //100ms pause prevents anything bad happening before we're ready
    Timer1.attachInterrupt(wave);
    Timer1.stop();                            //Stop the timer until we're ready
  }

#endif

TimerClass Timer;
