#ifndef __LCD_H__
#define __LCD_H__



#ifdef __cplusplus
class lcd
{
	
public:

	typedef struct{
		char line[32];
		char format[32];
    }tag_line;
    
	short lightVal;
	short backVal;
    int m_width;
    int m_height;
    tag_line m_line[4];
    char* buf;
    //static const  char  lcd::ascii_table_8x16[95*16];
    static const char ascii_table_8x16[95*16];
    
    lcd(void);
    ~lcd();
    void init(int width,int height);
    void transfer_command(char cmd);
    void transfer_data(char data);
    void lcd_address(unsigned char page,unsigned char column);
    void clear_screen(void);
    void write_point(int x,int y,int val);
    //void out_char(int* x,int* y,const  char** c,int size =16);
    void out_char(int* x,int* y,char** c,int size =16);
    void Out(int* x,int* y,  char* c,int size =16);
    void frush(void);
    void readString(char* c);
    int read_point(int x,int y,const  char* c,int size =16);
};
extern "C"
{
#endif
	void LCD_Init(void);
	void view(char* c);
	void writeLED(char val);	
#ifdef __cplusplus
}
#endif




#endif

