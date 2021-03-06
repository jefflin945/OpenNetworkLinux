#ifndef __I2C_EEPROM_CONFIG_MAPLE
#define __I2C_EEPROM_CONFIG_MAPLE
struct eeprom_config_t maple_eeprom_config_map[] = {
/*port , i2c_channel*/
{0, 22},
{1, 23},
{2, 24},
{3, 25},
{4, 26},
{5, 27},
{6, 28},
{7, 29},
{8, 30},
{9, 31},
{10, 32},
{11, 33},
{12, 34},
{13, 35},
{14, 36},
{15, 37},
{16, 38},
{17, 39},
{18, 40},
{19, 41},
{20, 42},
{21, 43},
{22, 44},
{23, 45},
{24, 46},
{25, 47},
{26, 48},
{27, 49},
{28, 50},
{29, 51},
{30, 52},
{31, 53},
{32, 54},
{33, 55},
{34, 56},
{35, 57},
{36, 58},
{37, 59},
{38, 60},
{39, 61},
{40, 62},
{41, 63},
{42, 64},
{43, 65},
{44, 66},
{45, 67},
{46, 68},
{47, 69},
{48, 14},
{49, 15},
{50, 16},
{51, 17},
{52, 18},
{53, 19},
{54, 20},
{55, 21},

};
struct eeprom_i2c_tbl_t maple_eeprom_i2c_tbl = {
    .map = maple_eeprom_config_map,
    .size = ARRAY_SIZE(maple_eeprom_config_map)
};
#endif /*__I2C_EEPROM_CONFIG_MAPLE*/
