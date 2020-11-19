#ifndef _DELAY_H_
#define _DELAY_H_

//_________________________________ Adjust your data________________________


#define F_CPU 16000000UL
#define timer0 256  //2^8bit as timer0 is 8bit 
#define prescaler 1024
//__________________________________________________________________________



#define delay_min(sec)      ((sec*60)/(timer0*(1/(F_CPU/prescaler)*1000)))  //delaying time with minutes *note very accurate if you are using internal clock*

#define delay_sec(sec)      (sec/(timer0*(1/(F_CPU/prescaler)*1000)))  //delaying time with seconds

#define delay_millisec(sec) ((sec/1000)/(timer0*(1/(F_CPU/prescaler)*1000))) //delaying time with milliseconds

#define delay_microsec(sec) ((sec/1000000)/(timer0*(1/(F_CPU/prescaler)*1000)))  //delaying time with microseconds











#endif