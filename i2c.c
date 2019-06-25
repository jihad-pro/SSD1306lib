// developed my me 
//jihad Hasanzadeh 
//Phone number : (Asian-iran) +98 9211710114
//@mail : stm.jihad@gmail.com
//whatApp Phone number : +98 9211710114
//Github page : https://github.com/jihad-pro


#include "i2c.h"
#include <io.h>

void I2C_init(void)
{
	//I2C INIT 
	// DEF_TWBR IS RENG BIT RATE
	TWBR = DEF_TWBR;	
}

void I2C_start(void)
{
	//START CONDITION
	TWCR = (1<<TWINT)|(1<<TWSTA)|(0<<TWSTO)|(1<<TWEN);
	//Wait FOR CLEAR TWINT 
	while(!(TWCR & (1<<TWINT)));	
}
void I2C_write(unsigned char byte)
{
	//send one byte to twi bus
	TWDR = byte ; 
	TWCR = (1<<TWINT) | (1<<TWEN);

	//Wait FOR CLEAR TWINT 
	while(!(TWCR & (1<<TWINT)));	
}


unsigned char I2C_read(void)
{
	
	TWCR = (1<<TWINT) | (1<<TWEN);
	//Wait FOR CLEAR TWINT
	while(!(TWCR & (1<<TWINT)));
	return TWDR;
}
void I2C_stop(void)
{
	
	//START CONDITION
	TWCR = (1<<TWINT)|(0<<TWSTA)|(1<<TWSTO)|(1<<TWEN);
}




	