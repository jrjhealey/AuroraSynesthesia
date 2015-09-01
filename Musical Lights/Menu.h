#pragma once

//INCLUDES

#include <windows.h>

#include "System.h"


//DEFINITIONS

#define TRAY_AURORA_AVERAGE_ITEM_ID				3010
#define TRAY_AURORA_VIBRANT_ITEM_ID				3011
#define TRAY_AURORA_ILLUMINATE_ITEM_ID			3012
#define TRAY_AURORA_DISABLE_ITEM_ID				3013
#define TRAY_AURORA_UNAVAILABLE_ITEM_ID			3014

#define TRAY_SYNESTHESIA_AMBIENT_ITEM_ID		3020
#define TRAY_SYNESTHESIA_REACTIVE_ITEM_ID		3021
#define TRAY_SYNESTHESIA_IMMERSIVE_ITEM_ID		3022
#define TRAY_SYNESTHESIA_DISABLE_ITEM_ID		3023
#define TRAY_SYNESTHESIA_UNAVAILABLE_ITEM_ID	3024

#define TRAY_ILLUMINATION_ORIGINAL_ITEM_ID		3030
#define TRAY_ILLUMINATION_SPECTRUM_ITEM_ID		3031
#define TRAY_ILLUMINATION_CANDLE_ITEM_ID		3032
#define TRAY_ILLUMINATION_RELAX_ITEM_ID			3033
#define TRAY_ILLUMINATION_CUSTOM_ITEM_ID		3034

#define TRAY_VISUALISATION_NATURAL_ITEM_ID		3040
#define TRAY_VISUALISATION_LIQUID_ITEM_ID		3041
#define TRAY_VISUALISATION_ENERGY_ITEM_ID		3042
#define TRAY_VISUALISATION_CUSTOM_ITEM_ID		3043

#define TRAY_MODE_RESPONCE_HIGH_ITEM_ID			3050
#define TRAY_MODE_RESPONCE_STANDARD_ITEM_ID		3051
#define TRAY_MODE_RESPONCE_LOW_ITEM_ID			3052

#define TRAY_SCREEN_SAMPLING_HIGH_ITEM_ID		3060
#define TRAY_SCREEN_SAMPLING_STANDARD_ITEM_ID	3061
#define TRAY_SCREEN_SAMPLING_LOW_ITEM_ID		3062

#define TRAY_WHITE_BALANCE_FIVE_ITEM_ID			3070
#define TRAY_WHITE_BALANCE_FOUR_ITEM_ID			3071
#define TRAY_WHITE_BALANCE_THREE_ITEM_ID		3072
#define TRAY_WHITE_BALANCE_TWO_ITEM_ID			3073
#define TRAY_WHITE_BALANCE_ONE_ITEM_ID			3074
#define TRAY_WHITE_BALANCE_OFF_ITEM_ID			3075

#define TRAY_BRIGHTNESS_ONEHUNDRED_ITEM_ID		3080
#define TRAY_BRIGHTNESS_NINETY_ITEM_ID			3081
#define TRAY_BRIGHTNESS_EIGHTY_ITEM_ID			3082
#define TRAY_BRIGHTNESS_SEVENTY_ITEM_ID			3083
#define TRAY_BRIGHTNESS_SIXTY_ITEM_ID			3084
#define TRAY_BRIGHTNESS_FIFTY_ITEM_ID			3085
#define TRAY_BRIGHTNESS_FOURTY_ITEM_ID			3086
#define TRAY_BRIGHTNESS_THIRTY_ITEM_ID			3087
#define TRAY_BRIGHTNESS_TWENTY_ITEM_ID			3088
#define TRAY_BRIGHTNESS_TEN_ITEM_ID				3089

#define TRAY_SENSITIVITY_TWOFIVESIX_ITEM_ID		3090
#define TRAY_SENSITIVITY_ONETWOEIGHT_ITEM_ID	3091
#define TRAY_SENSITIVITY_SIXTYFOUR_ITEM_ID		3092
#define TRAY_SENSITIVITY_THIRTYTWO_ITEM_ID		3093
#define TRAY_SENSITIVITY_SIXTEEN_ITEM_ID		3094
#define TRAY_SENSITIVITY_EIGHT_ITEM_ID			3095
#define TRAY_SENSITIVITY_FOUR_ITEM_ID			3096
#define TRAY_SENSITIVITY_TWO_ITEM_ID			3097
#define TRAY_SENSITIVITY_ONE_ITEM_ID			3098
#define TRAY_SENSITIVITY_PFIVE_ITEM_ID			3099
#define TRAY_SENSITIVITY_ADAPTIVE_ITEM_ID		3100

#define TRAY_ARRANGEMENT_STEREO_ITEM_ID			3110
#define TRAY_ARRANGEMENT_SURROUND_ITEM_ID		3111

#define TRAY_UPDATES_ITEM_ID					3120
#define TRAY_CONNECT_DISCONNECT_ITEM_ID			3121
#define TRAY_EXIT_ITEM_ID						3122


#define REQUIRES_AURORA(x)			if(system_->usingAurora()){x}
#define REQUIRES_NO_AURORA(x)		if(!system_->usingAurora()){x}
#define REQUIRES_SYNESTHESIA(x)		if(system_->usingSynesthesia()){x}
#define REQUIRES_NO_SYNESTHESIA(x)	if(!system_->usingSynesthesia()){x}
#define REQUIRES_EITHER(x)			if((system_->usingAurora()) || (system_->usingSynesthesia())){x}
#define REQUIRES_BOTH(x)			if((system_->usingAurora()) && (system_->usingSynesthesia())){x}


//CLASSES

class Menu
{
public:
	Menu(System* system);
	~Menu(void);

public:
	void respondToClick(POINT cursor, HWND hWnd);
	void updateOptions(void);

private:
	System* system_;

	HMENU rootMenu_;
	HMENU settingsMenu_;

	HMENU auroraMenu_;
	HMENU synesthesiaMenu_;

	HMENU illuminationMenu_;
	HMENU visualisationMenu_;

	HMENU modeResponceMenu_;
	HMENU screenSamplingMenu_;
	HMENU whiteBalanceMenu_;	
	HMENU lightBrightnessMenu_;
	HMENU lightSensitivityMenu_;
	HMENU lightingArrangementMenu_;
};