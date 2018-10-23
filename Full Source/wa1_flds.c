#include "wa_fields.h"

//--FIELDENTRY consists of:  
//--	field name, field length, start position, 
//--	number of array entries, length of array entry, 
//--	start of structure, end of structure, [in FIELDENTRY array]
//--	data type (only for msw), entry type (' ', 'S' for structure)

FIELDENTRY wa1_fld_strs[] = { 
{ "INPUT FUNCTION CODE             ", 2, 1, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT HIGH HND                  ", 16, 3, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT HIGH HNS                  ", 11, 19, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT LOW HND                   ", 16, 30, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT LOW HNS                   ", 11, 46, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT BORO 1                    ", 1, 57, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT SC10 1                    ", 10, 58, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT STREET NAME 1             ", 32, 68, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT BORO 2                    ", 1, 100, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT SC10 2                    ", 10, 101, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT STREET NAME 2             ", 32, 111, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT BORO 3                    ", 1, 143, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT SC10 3                    ", 10, 144, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT STREET NAME 3             ", 32, 154, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT BBL                       ", 10, 186, 0, 0, 0, 0, ' ', ' ' }, 
{ "   INPUT BBL BORO               ", 1, 186, 0, 0, 0, 0, ' ', ' ' }, 
{ "   INPUT BBL BLOCK              ", 5, 187, 0, 0, 0, 0, ' ', ' ' }, 
{ "   INPUT BBL LOT                ", 4, 192, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT FILLER                    ", 1, 196, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT BIN                       ", 7, 197, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT COMPASS 1                 ", 1, 204, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT COMPASS 2                 ", 1, 205, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT NODE                      ", 7, 206, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT PLATFORM INDICATOR        ", 1, 213, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT ZIP CODE                  ", 5, 214, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT FILLER                    ", 96, 219, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT LONG WORKAREA 2 FLAG      ", 1, 315, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT HND JUSTIFY FLAG          ", 1, 316, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT HNL FLAG                  ", 2, 317, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT HND OVERRIDE FLAG         ", 1, 319, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT SNL FLAG                  ", 2, 320, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT STNAME NORMALIZATION      ", 1, 322, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT CROSS STREETS NAMES FLAG  ", 1, 323, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT ROADBED FLAG              ", 1, 324, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT FILLER                    ", 1, 325, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT AUXSEG FLAG               ", 1, 326, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT BROWSE FLAG               ", 1, 327, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT REAL STREETS FLAG         ", 1, 328, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT TPAD SWITCH               ", 1, 329, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT MODE SWITCH               ", 1, 330, 0, 0, 0, 0, ' ', ' ' }, 
{ "INPUT FILLER                    ", 30, 331, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT BORO NAME                ", 9, 361, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT HIGH HND                 ", 16, 370, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT HIGH HNS                 ", 11, 386, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT BORO 1                   ", 1, 397, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT SC10 1                   ", 10, 398, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT STREET NAME 1            ", 32, 408, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT BORO 2                   ", 1, 440, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT SC10 2                   ", 10, 441, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT STREET NAME 2            ", 32, 451, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT BORO 3                   ", 1, 483, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT SC10 3                   ", 10, 484, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT STREET NAME 3            ", 32, 494, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT BBL                      ", 10, 526, 0, 0, 0, 0, ' ', ' ' }, 
{ "   OUTPUT BBL BORO              ", 1, 525, 0, 0, 0, 0, ' ', ' ' }, 
{ "   OUTPUT BBL BLOCK             ", 5, 526, 0, 0, 0, 0, ' ', ' ' }, 
{ "   OUTPUT BBL LOT               ", 4, 531, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT FILLER                   ", 1, 536, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT LOW HND                  ", 16, 537, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT LOW HNS                  ", 11, 553, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT BIN                      ", 7, 564, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT GFTS                     ", 3, 571, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT REASON CODE 2            ", 1, 574, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT REASON CODE QUALIFIER 2  ", 1, 575, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT WARNING CODE 2           ", 2, 576, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT GRC 2                    ", 2, 578, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT ERROR MESSAGE 2          ", 80, 580, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT NODE                     ", 7, 660, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT FILLER                   ", 39, 667, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT FILLER                   ", 6, 706, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT FILLER                   ", 1, 712, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT REASON CODE              ", 1, 713, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT REASON CODE QUALIFIER    ", 1, 714, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT WARNING CODE             ", 2, 715, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT GRC                      ", 2, 717, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT ERROR MESSAGE            ", 80, 719, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT NUMBER OF STREETS        ", 2, 799, 0, 0, 0, 0, ' ', ' ' }, 
{ "OUTPUT B7SCS ARRAY              ", 80, 801, 10, 8, 0, 0, ' ', ' ' }, 
{ "OUTPUT STREET NAMES ARRAY       ", 320, 881, 10, 32, 0, 0, ' ', ' ' }, 
}; 

int n_wa1_field_recs = sizeof(wa1_fld_strs) / sizeof(FIELDENTRY); 
//PFIELDENTRY wa1_flds = &wa1_fld_strs; 
PFIELDENTRY wa1_flds = (PFIELDENTRY)wa1_fld_strs; 
