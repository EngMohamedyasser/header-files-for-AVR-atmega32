#ifndef interrupt_H_
#define interrupt_H_
#define enable_interrupt_pin(int_num)   GICR|=(1<<int_num)
void enable_interrupt(){
	sei();
}
void enable_rising_edge(){
   MCUCR|=	(1<<ISC01)|(1<<ISC00)
	}
void enable_falling_edge(){
	MCUCR|=(1<<ISC01)|(0<<ISC00)
	
}
	
}
#endif