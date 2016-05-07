#define CAPACITY_MAX			980
#define CAPACITY_MAX_MARGIN     50
#define CAPACITY_MIN			0

#if defined(CONFIG_MACH_A5_CHN_OPEN) || defined(CONFIG_MACH_A5_CHN_CTC) ||\
		defined(CONFIG_MACH_A5_CHN_ZT) || defined(CONFIG_MACH_A5_CHN_ZH) ||\
		defined(CONFIG_MACH_A5VE_CHN_OPEN)
static sec_bat_adc_table_data_t temp_table[] = {
  {25289, 900},
  {25419, 850},
  {25559, 800},
  {25723, 750},
  {25913, 700},
  {26147, 650},
  {26388, 600},
  {26665, 550},
  {26980, 500},
  {27320, 450},
  {27715, 400},
  {28144, 350},
  {28614, 300},
  {29122, 250},
  {29656, 200},
  {30203, 150},
  {30727, 100},
  {31158, 50},
  {31563, 0},
  {31996, -50},
  {32396, -100},
  {32737, -150},
  {33984, -200},
};
#else
static sec_bat_adc_table_data_t temp_table[] = {
  {25304, 900},
  {25464, 850},
  {25624, 800},
  {25784, 750},
  {25960, 700},
  {26168, 650},
  {26388, 600},
  {26654, 550},
  {26964, 500},
  {27316, 450},
  {27709, 400},
  {28145, 350},
  {28607, 300},
  {29096, 250},
  {29641, 200},
  {30176, 150},
  {30679, 100},
  {31166, 50},
  {31659, 0},
  {32078, -50},
  {32399, -100},
  {32712, -150},
  {32978, -200},
};
#endif

#define TEMP_HIGHLIMIT_THRESHOLD_EVENT		800
#define TEMP_HIGHLIMIT_RECOVERY_EVENT		750
#define TEMP_HIGHLIMIT_THRESHOLD_NORMAL		800
#define TEMP_HIGHLIMIT_RECOVERY_NORMAL		750
#define TEMP_HIGHLIMIT_THRESHOLD_LPM		800
#define TEMP_HIGHLIMIT_RECOVERY_LPM		750

#if defined(CONFIG_MACH_A5_CHN_OPEN) || defined(CONFIG_MACH_A5_CHN_CTC) ||\
		defined(CONFIG_MACH_A5_CHN_ZT) || defined(CONFIG_MACH_A5_CHN_ZH) ||\
		defined(CONFIG_MACH_A5VE_CHN_OPEN)
#define TEMP_HIGH_THRESHOLD_EVENT  600
#define TEMP_HIGH_RECOVERY_EVENT   460
#define TEMP_LOW_THRESHOLD_EVENT   (-50)
#define TEMP_LOW_RECOVERY_EVENT    0
#define TEMP_HIGH_THRESHOLD_NORMAL 600
#define TEMP_HIGH_RECOVERY_NORMAL  460
#define TEMP_LOW_THRESHOLD_NORMAL  (-50)
#define TEMP_LOW_RECOVERY_NORMAL   0
#define TEMP_HIGH_THRESHOLD_LPM    600
#define TEMP_HIGH_RECOVERY_LPM     460
#define TEMP_LOW_THRESHOLD_LPM     (-50)
#define TEMP_LOW_RECOVERY_LPM      0
#elif defined(CONFIG_MACH_A5_EUR_OPEN) || defined(CONFIG_MACH_A53G_EUR_OPEN)
#define TEMP_HIGH_THRESHOLD_EVENT  600
#define TEMP_HIGH_RECOVERY_EVENT   490
#define TEMP_LOW_THRESHOLD_EVENT   (-50)
#define TEMP_LOW_RECOVERY_EVENT    1
#define TEMP_HIGH_THRESHOLD_NORMAL 600
#define TEMP_HIGH_RECOVERY_NORMAL  490
#define TEMP_LOW_THRESHOLD_NORMAL  (-50)
#define TEMP_LOW_RECOVERY_NORMAL   1
#define TEMP_HIGH_THRESHOLD_LPM    600
#define TEMP_HIGH_RECOVERY_LPM     490
#define TEMP_LOW_THRESHOLD_LPM     (-50)
#define TEMP_LOW_RECOVERY_LPM      1
#else
#define TEMP_HIGH_THRESHOLD_EVENT  580
#define TEMP_HIGH_RECOVERY_EVENT   530
#define TEMP_LOW_THRESHOLD_EVENT   (-50)
#define TEMP_LOW_RECOVERY_EVENT    1
#define TEMP_HIGH_THRESHOLD_NORMAL 580
#define TEMP_HIGH_RECOVERY_NORMAL  530
#define TEMP_LOW_THRESHOLD_NORMAL  (-50)
#define TEMP_LOW_RECOVERY_NORMAL   1
#define TEMP_HIGH_THRESHOLD_LPM    580
#define TEMP_HIGH_RECOVERY_LPM     530
#define TEMP_LOW_THRESHOLD_LPM     (-50)
#define TEMP_LOW_RECOVERY_LPM      1
#endif

#if defined(CONFIG_BATTERY_SWELLING)
#if defined(CONFIG_MACH_A5_EUR_OPEN) || defined(CONFIG_MACH_A53G_EUR_OPEN)
#define BATT_SWELLING_HIGH_TEMP_BLOCK		500
#define BATT_SWELLING_HIGH_TEMP_RECOV		450
#define BATT_SWELLING_LOW_TEMP_BLOCK		-200
#define BATT_SWELLING_LOW_TEMP_RECOV		-200
#define BATT_SWELLING_RECHG_VOLTAGE		4150
#define BATT_SWELLING_BLOCK_TIME	10 * 60 /* 10 min */
#else
#define BATT_SWELLING_HIGH_TEMP_BLOCK		550
#define BATT_SWELLING_HIGH_TEMP_RECOV		460
#define BATT_SWELLING_LOW_TEMP_BLOCK		100
#define BATT_SWELLING_LOW_TEMP_RECOV		150
#define BATT_SWELLING_RECHG_VOLTAGE		4150
#define BATT_SWELLING_BLOCK_TIME	10 * 60 /* 10 min */
#endif
#endif

#if defined(CONFIG_MACH_KOR_EARJACK_WR)
#define EARJACK_WR_SYSTEM_REV			0x04
#define EARJACK_WR_SOC_1ST				75
#define EARJACK_WR_SOC_2ND				90
#define EARJACK_WR_INPUT_CURRENT_1ST	500
#define EARJACK_WR_INPUT_CURRENT_2ND	100
#endif
