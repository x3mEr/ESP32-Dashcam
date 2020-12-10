#define SERIAL_BAUD				115200

#define MOUNT_POINT				"/sdcard"

#define LED_RED					33		// works with inverted logic
#define LED_ON					LOW
#define LED_OFF					HIGH

#define EEPROM_SIZE				7		// total bytes to use
#define EEPROM_ADDR_FOLDER_NUM	1		// address of `folder_num` in EEPROM
#define EEPROM_ADDR_FRAMESIZE	5		// address of `framesize` in EEPROM
#define EEPROM_ADDR_QUALITY		6		// address of `quality` in EEPROM