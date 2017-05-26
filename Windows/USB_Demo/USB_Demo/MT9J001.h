#ifndef _MT9J001_H_
#define _MT9J001_H_

#include "sensor.h"

#ifdef MT9J001
const struct sensor_reg reg_setting_MT9J001[] =
{

	//Recommended Default Register Changes 
	{0x316C, 0x0429}, //
	{0x3174, 0x8000}, //
	{0x3E40, 0xDC05}, //
	{0x3E42, 0x6E22}, //
	{0x3E44, 0xDC22}, //
	{0x3E46, 0xFF00}, // Added to improve dark frame nonuniformity.
	{0x3ED4, 0xF998}, //
	{0x3ED6, 0x9789}, //
	{0x3EDE, 0xE41A}, // Set to 0xE412 in low-power mode.
	{0x3EE0, 0xA43F}, //
	{0x3EE2, 0xA4BF}, // ADC Bias Voltage
	{0x3EEC, 0x1221}, // Removes saturation noise that could be seen in Low Power Mode.
	{0x3EEE, 0x1224}, //
/* 640x480
	{0x0100, 0x0	}, //Mode Select = 0x0
	{0x0300, 0x5	}, //vt_pix_clk_div = 0x5
	{0x0302, 0x08	}, //vt_sys_clk_div = 0x8
	{0x0304, 0x05	}, //pre_pll_clk_div = 0x5
	{0x0306, 0x84	}, //pll_multiplier = 0x84
	{0x0308, 0x0A	}, //op_pix_clk_div = 0xA
	{0x030A, 0x04	}, //op_sys_clk_div = 0x4
	//DELAY = 1              // Allow PLL to lock
	{0x3064, 0x805	}, //RESERVED_MFR_3064 = 0x805
	{0x0104, 0x1	}, //Grouped Parameter Hold = 0x1
	{0x3016, 0x111	}, //Row Speed = 0x111
	{0x0344, 0x518	}, //Column Start = 0x518
	{0x0348, 0xA15	}, //Column End = 0xA15
	{0x0346, 0x386	}, //Row Start = 0x386
	{0x034A, 0x743	}, //Row End = 0x743
	{0x3040, 0x04C3	}, //Read Mode = 0x4C3
	{0x0400, 0x0	}, //Scaling Mode = 0x0
	{0x0404, 0x10	}, //Scale_M = 0x10
	{0x034C, 0x280	}, //Output Width = 0x280
	{0x034E, 0x1E0	}, //Output Height = 0x1E0
	{0x0342, 0x0D12	}, //Line Length = 0xD12
	{0x0340, 0x0230	}, //Frame Lines = 0x230
	{0x0202, 0x0010	}, //Coarse Integration Time (OPTIONAL) = 0x10
	{0x3014, 0x07B2	}, //Fine Integration Time = 0x7B2
	{0x3010, 0x0134	}, //Fine Correction = 0x134
	{0x3018, 0x0000	}, //Extra Delay = 0x0
	{0x30D4, 0x1080	}, //Cols Dbl Sampling = 0x1080
	{0x306E, 0x90B0	}, //Scalar Re-sampling = 0x90B0
	{0x3E00, 0x0010	}, //Low Power On_Off = 0x10
	{0x3178, 0x0000	}, //Summing Procedure 1 = 0x0
	{0x3ED0, 0x1B24	}, //Summing Procedure 2 = 0x1B24
	{0x3EDC, 0xC3E4	}, //Summing Procedure 3 = 0xC3E4
	{0x3EE8, 0x0000	}, //Summing Procedure 4 = 0x0
	{0x0104, 0x0	}, //Grouped Parameter Hold = 0x0
	{0x0100, 0x1	}, //Mode Select = 0x1
*/

	//3664x2748
	{0x0100, 0x0	},//Mode Select = 0x0
	{0x0300, 0x6	},  //vt_pix_clk_div = 0x6
	{0x0302, 0x01	},  //vt_sys_clk_div = 0x1
	{0x0304, 0x08	},  //pre_pll_clk_div = 0x4
	{0x0306, 0x6E	},  //pll_multiplier = 0x6E
	{0x0308, 0x0C	},  //op_pix_clk_div = 0xC
	{0x030A, 0x01	},   //op_sys_clk_div = 0x1
	//DELAY = 1                 // Allow PLL to lock
	{0x3064, 0x805	},   //RESERVED_MFR_3064 = 0x805
	{0x0104, 0x1	},   //Grouped Parameter Hold = 0x1
	{0x3016, 0x111	},   //Row Speed = 0x111
	{0x0344, 0x070	},   //Column Start = 0x70
	{0x0348, 0xEBF	},   //Column End = 0xEBF
	{0x0346, 0x008	},   //Row Start = 0x8
	{0x034A, 0xAC3	},   //Row End = 0xAC3
	{0x3040, 0x0041	},   //Read Mode = 0x41
	{0x0400, 0x0	},   //Scaling Mode = 0x0
	{0x0404, 0x10	},   //Scale_M = 0x10
	{0x034C, 0xE50	},   //Output Width = 0xE50
	{0x034E, 0xABC	},   //Output Height = 0xABC
	{0x0342, 0x1D10	},   //Line Length = 0x1D10
	{0x0340, 0x0B4D	},   //Frame Lines = 0xB4D
	{0x0202, 0x0010	},   //Coarse Integration Time (OPTIONAL) = 0x10
	{0x3014, 0x03F2	},   //Fine Integration Time = 0x3F2
	{0x3010, 0x009C	},   //Fine Correction = 0x9C
	{0x3018, 0x0000	},   //Extra Delay = 0x0
	{0x30D4, 0x1080	},   //Cols Dbl Sampling = 0x1080
	{0x306E, 0x90B0	},   //Scalar Re-sampling = 0x90B0
	{0x3E00, 0x0010	},   //Low Power On_Off = 0x10
	{0x3178, 0x0000	},   //Summing Procedure 1 = 0x0
	{0x3ED0, 0x1B24	},   //Summing Procedure 2 = 0x1B24
	{0x3EDC, 0xC3E4	},   //Summing Procedure 3 = 0xC3E4
	{0x3EE8, 0x0000	},   //Summing Procedure 4 = 0x0
	{0x0104, 0x0	},   //Grouped Parameter Hold = 0x0
	{0x0100, 0x1	},   //Mode Select = 0x1

	//
	{0x31AE, 0x0301 }, //Configure with the Parallel Sensor

	{0x301A, 0x0010}, //Unlock data pedestal Register
	{0x3064, 0x0805}, //Disable embedded data
	{0x301E, 0x00A8}, //Set data pedestal to 168

	{0x301A, 0x10DC},
	{0xffff, 0xffff},
};
#endif



#endif;
