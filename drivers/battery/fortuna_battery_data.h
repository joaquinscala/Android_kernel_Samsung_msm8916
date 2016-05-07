#define CAPACITY_MAX			960
#define CAPACITY_MAX_MARGIN     50
#define CAPACITY_MIN			0

#if defined(CONFIG_MACH_FORTUNA_TMO) || defined(CONFIG_MACH_FORTUNA_SPR)
static sec_bat_adc_table_data_t temp_table[] = {
	{26056, 900},
	{26268, 850},
	{26520, 800},
	{26864, 750},
	{27214, 700},
	{27631, 650},
	{28183, 600},
	{28739, 550},
	{29389, 500},
	{30153, 450},
	{30965, 400},
	{31919, 350},
	{32930, 300},
	{33951, 250},
	{34957, 200},
	{36038, 150},
	{37194, 100},
	{38152, 50},
	{39002, 0},
	{39805, -50},
	{40421, -100},
	{41055, -150},
	{41593, -200},
};
#else
static sec_bat_adc_table_data_t temp_table[] = {
	{26056, 900},
	{26218, 850},
	{26580, 800},
	{26884, 750},
	{27229, 700},
	{27581, 650},
	{28146, 600},
	{28715, 550},
	{29371, 500},
	{30112, 450},
	{30940, 400},
	{31919, 350},
	{32820, 300},
	{33951, 250},
	{34905, 200},
	{36038, 150},
	{37120, 100},
	{38060, 50},
	{38971, 0},
	{39831, -50},
	{40520, -100},
	{41055, -150},
	{41593, -200},
};
#endif

#define TEMP_HIGHLIMIT_THRESHOLD_EVENT		800
#define TEMP_HIGHLIMIT_RECOVERY_EVENT		750
#define TEMP_HIGHLIMIT_THRESHOLD_NORMAL		800
#define TEMP_HIGHLIMIT_RECOVERY_NORMAL		750
#define TEMP_HIGHLIMIT_THRESHOLD_LPM		800
#define TEMP_HIGHLIMIT_RECOVERY_LPM		750

#if defined(CONFIG_MACH_FORTUNA_TMO) || defined(CONFIG_MACH_FORTUNA_SPR)
#define TEMP_HIGH_THRESHOLD_EVENT  600
#define TEMP_HIGH_RECOVERY_EVENT   460
#define TEMP_LOW_THRESHOLD_EVENT   (-50)
#define TEMP_LOW_RECOVERY_EVENT    0
#define TEMP_HIGH_THRESHOLD_NORMAL 530
#define TEMP_HIGH_RECOVERY_NORMAL  470
#define TEMP_LOW_THRESHOLD_NORMAL  (-50)
#define TEMP_LOW_RECOVERY_NORMAL   0
#define TEMP_HIGH_THRESHOLD_LPM    510
#define TEMP_HIGH_RECOVERY_LPM     495
#define TEMP_LOW_THRESHOLD_LPM     (-10)
#define TEMP_LOW_RECOVERY_LPM      (-5)
#else
#define TEMP_HIGH_THRESHOLD_EVENT  600
#define TEMP_HIGH_RECOVERY_EVENT   490
#define TEMP_LOW_THRESHOLD_EVENT   (-50)
#define TEMP_LOW_RECOVERY_EVENT    1
#define TEMP_HIGH_THRESHOLD_NORMAL 510
#define TEMP_HIGH_RECOVERY_NORMAL  460
#define TEMP_LOW_THRESHOLD_NORMAL  (-50)
#define TEMP_LOW_RECOVERY_NORMAL   0
#define TEMP_HIGH_THRESHOLD_LPM    500
#define TEMP_HIGH_RECOVERY_LPM     470
#define TEMP_LOW_THRESHOLD_LPM     (-30)
#define TEMP_LOW_RECOVERY_LPM      1
#endif

#if defined(CONFIG_BATTERY_SWELLING)
#define BATT_SWELLING_HIGH_TEMP_BLOCK		500
#define BATT_SWELLING_HIGH_TEMP_RECOV		450
#define BATT_SWELLING_LOW_TEMP_BLOCK		100
#define BATT_SWELLING_LOW_TEMP_RECOV		150
#define BATT_SWELLING_RECHG_VOLTAGE		4150
#define BATT_SWELLING_BLOCK_TIME	10 * 60 /* 10 min */
#endif
