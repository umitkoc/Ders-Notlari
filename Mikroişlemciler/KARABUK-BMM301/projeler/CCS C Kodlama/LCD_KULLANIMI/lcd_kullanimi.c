#include <lcd_kullanimi.h>

#include <lcd.c>

void main()
{
      int8 x;
      lcd_init();

   while(TRUE)
   {


   // 1.sat�r i�in sa�dan sola soldan sa�a kayan yaz�
   for(x=1; x<=6; x++)
   {
      printf(lcd_putc,"\f");
      lcd_gotoxy(x,1);
      printf(lcd_putc,"BILGISAYAR");
      delay_ms(200);
   }
   
   for(x=6; x>=1; x--)
   {
      printf(lcd_putc,"\f");
      lcd_gotoxy(x,1);
      printf(lcd_putc,"BILGISAYAR");
      delay_ms(200);
   }   
   
   /* MOD10000 LCD ���N
      data++;
      if(data == 10000) data = 0;
      printf(lcd_putc,"\f SAYAC = %04Lu",data);
      delay_ms(200);
   */
   }

}
