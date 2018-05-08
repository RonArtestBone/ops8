#ifndef __LCD_H__
#define __LCD_H__



#ifdef __cplusplus
class led
{
	
public:
	typedef struct{
		char on;
		char format[32];
    }tag_led;    
    
    led(void);
    ~led();
};
extern "C"
{
#endif
	void led_init(void);
	void led_on(void);
	void led_off(void);
	void led_toggle(void);
	void led_states(char*);
#ifdef __cplusplus
}
#endif




#endif


