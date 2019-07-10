#ifndef util_H_
#define util_H_
#define open_Register_for_bit (Register,bit) Register=(1<<bit)
#define open_port_for_bit(PORT,bit)      PORT|=(1<<bit)
#define clear_port_for_bit(PORT,bit)      PORT &=^(1<<bit)
#define open_Register(Register) Register=0xff
#define clear_Register(Register) Register=0x00
#define toggle_bit (reg , bit) reg^=(1<<bit)
#endif