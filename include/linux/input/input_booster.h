#ifndef _INPUT_BOOSTER_H_

#define DVFS_STAGE_NONE		0	// 0000 0000 0000 0001
#define DVFS_STAGE_SINGLE	1	// 0000 0000 0000 0010
#define DVFS_STAGE_DUAL		2	// 0000 0000 0000 0100
#define DVFS_STAGE_TRIPLE	 3	// 0000 0000 0000 1000
#define DVFS_STAGE_PENTA	 5	// 0000 0000 0010 0000
#define DVFS_STAGE_NINTH	 9	// 0000 0010 0000 0000

/* TSP */
#define INPUT_BOOSTER_OFF_TIME_TSP		500
#define INPUT_BOOSTER_CHG_TIME_TSP		130
#define INPUT_BOOSTER_HIGH_OFF_TIME_TSP		1000
#define INPUT_BOOSTER_HIGH_CHG_TIME_TSP		500

/* Touchkey */
#define INPUT_BOOSTER_OFF_TIME_TKEY		500
#define INPUT_BOOSTER_CHG_TIME_TKEY		500

/* Wacom */
#define INPUT_BOOSTER_OFF_TIME_WACOM		500
#define INPUT_BOOSTER_CHG_TIME_WACOM		130

struct input_booster {
	struct delayed_work	work_dvfs_off;
	struct delayed_work	work_dvfs_chg;
	struct mutex		dvfs_lock;
	bool dvfs_lock_status;
	int dvfs_old_stauts;
	int dvfs_boost_mode;
	int dvfs_freq;
	int dvfs_id;
	int dvfs_stage;
	int (*dvfs_off)(struct input_booster *);
	void (*dvfs_set)(struct input_booster *, int);
};
void input_booster_init_dvfs(struct input_booster *booster, int id);