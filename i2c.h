// developed my me 
//jihad Hasanzadeh 
//Phone number : (Asian-iran) +98 9211710114
//@mail : stm.jihad@gmail.com
//whatApp Phone number : +98 9211710114
//Github page : https://github.com/jihad-pro

#ifndef I2C_H_
#define I2C_H_

#define DEF_RWBR  32

extern void I2C_init (void);
extern void I2C_start(void);
extern void I2C_write(unsigned char ) ;
extern unsigned char I2C_read(void);
extern void I2C_stop(void);
#endif
