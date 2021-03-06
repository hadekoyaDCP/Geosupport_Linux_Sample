#include "wa_fields.h"

//--FIELDENTRY consists of:  
//--	field name, field length, start position, 
//--	number of array entries, length of array entry, 
//--	start of structure, end of structure, [in FIELDENTRY array]
//--	data type (only for msw), entry type (' ', 'S' for structure)

FIELDENTRY wa2_f1ex_fld_strs[] = { 
{ "ACCESS KEY                      ", 21, 1, 0, 0, 0, 0, ' ', ' ' }, 
{ "CONT PARITY - DUP ADDR          ", 1, 22, 0, 0, 0, 0, ' ', ' ' }, 
{ "LOW HOUSE NUMBER OF BLOCK FACE  ", 11, 23, 0, 0, 0, 0, ' ', ' ' }, 
{ "HIGH HOUSE NUMBER OF BLOCK FACE ", 11, 34, 0, 0, 0, 0, ' ', ' ' }, 
{ "DCP PREFERRED LGC               ", 2, 45, 0, 0, 0, 0, ' ', ' ' }, 
{ "NUMBER OF XSTREETS AT LOW END   ", 1, 47, 0, 0, 0, 0, ' ', ' ' }, 
{ "LIST OF XSTREETS AT LOW END     ", 30, 48, 5, 6, 0, 0, ' ', ' ' }, 
{ "NUMBER OF XSTREETS AT HIGH END  ", 1, 78, 0, 0, 0, 0, ' ', ' ' }, 
{ "LIST OF XSTREETS AT HIGH END    ", 30, 79, 5, 6, 0, 0, ' ', ' ' }, 
{ "LION KEY                        ", 10, 109, 0, 0, 0, 0, ' ', ' ' }, 
{ "   LION KEY BORO                ", 1, 109, 0, 0, 0, 0, ' ', ' ' }, 
{ "   LION KEY FACE CODE           ", 4, 110, 0, 0, 0, 0, ' ', ' ' }, 
{ "   LION KEY SEQUENCE            ", 5, 114, 0, 0, 0, 0, ' ', ' ' }, 
{ "SPECIAL ADDRESS FLAG            ", 1, 119, 0, 0, 0, 0, ' ', ' ' }, 
{ "SIDE OF STREET INDICATOR        ", 1, 120, 0, 0, 0, 0, ' ', ' ' }, 
{ "SEGMENT LENGTH IN FEET          ", 5, 121, 0, 0, 0, 0, ' ', ' ' }, 
{ "SPATIAL X COORDINATE            ", 7, 126, 0, 0, 0, 0, ' ', ' ' }, 
{ "SPATIAL Y COORDINATE            ", 7, 133, 0, 0, 0, 0, ' ', ' ' }, 
{ "RESERVED FOR Z COORDINATE       ", 7, 140, 0, 0, 0, 0, ' ', ' ' }, 
{ "INTERIM ASSISTANCE ELIGIBILITY  ", 1, 147, 0, 0, 0, 0, ' ', ' ' }, 
{ "MARBLE HILL/RIKERS ISLAND FLAG  ", 1, 148, 0, 0, 0, 0, ' ', ' ' }, 
{ "DOT STREET LIGHT CONTRACTOR AREA", 1, 149, 0, 0, 0, 0, ' ', ' ' }, 
{ "COMMUNITY DISTRICT:             ", 3, 150, 0, 0, 0, 0, ' ', ' ' }, 
{ "   COMMUNITY DISTRICT BORO CODE ", 1, 150, 0, 0, 0, 0, ' ', ' ' }, 
{ "   COMMUNITY DISTRICT NUMBER    ", 2, 151, 0, 0, 0, 0, ' ', ' ' }, 
{ "ZIP CODE                        ", 5, 153, 0, 0, 0, 0, ' ', ' ' }, 
{ "ELECTION DISTRICT               ", 3, 158, 0, 0, 0, 0, ' ', ' ' }, 
{ "ASSEMBLY DISTRICT               ", 2, 161, 0, 0, 0, 0, ' ', ' ' }, 
{ "SPLIT ELECTION DISTRICT FLAG    ", 1, 163, 0, 0, 0, 0, ' ', ' ' }, 
{ "CONGRESSIONAL DISTRICT          ", 2, 164, 0, 0, 0, 0, ' ', ' ' }, 
{ "STATE SENATORIAL DISTRICT       ", 2, 166, 0, 0, 0, 0, ' ', ' ' }, 
{ "CIVIL COURT DISTRICT            ", 2, 168, 0, 0, 0, 0, ' ', ' ' }, 
{ "CITY COUNCIL DISTRICT           ", 2, 170, 0, 0, 0, 0, ' ', ' ' }, 
{ "SANITATION DISTRICT             ", 3, 178, 0, 0, 0, 0, ' ', ' ' }, 
{ "SANITATION SCHEDULE SEC & SUBSEC", 2, 181, 0, 0, 0, 0, ' ', ' ' }, 
{ "SANITATION REGULAR SCHEDULE     ", 5, 183, 0, 0, 0, 0, ' ', ' ' }, 
{ "SANITATION RECYCLING SCHEDULE   ", 3, 188, 0, 0, 0, 0, ' ', ' ' }, 
{ "POLICE PATROL BOROUGH COMMAND   ", 1, 191, 0, 0, 0, 0, ' ', ' ' }, 
{ "POLICE PRECINCT                 ", 3, 192, 0, 0, 0, 0, ' ', ' ' }, 
{ "FIRE DIVISION                   ", 2, 195, 0, 0, 0, 0, ' ', ' ' }, 
{ "FIRE BATTALION                  ", 2, 197, 0, 0, 0, 0, ' ', ' ' }, 
{ "FIRE COMPANY TYPE               ", 1, 199, 0, 0, 0, 0, ' ', ' ' }, 
{ "FIRE COMPANY NUMBER             ", 3, 200, 0, 0, 0, 0, ' ', ' ' }, 
{ "COMMUNITY SCHOOL DISTRICT       ", 2, 204, 0, 0, 0, 0, ' ', ' ' }, 
{ "DYNAMIC BLOCK                   ", 3, 206, 0, 0, 0, 0, ' ', ' ' }, 
{ "FILLER_INDV                     ", 2, 209, 0, 0, 0, 0, ' ', ' ' }, 
{ "FEATURE TYPE CODE               ", 1, 211, 0, 0, 0, 0, ' ', ' ' }, 
{ "SEGMENT TYPE CODE               ", 1, 212, 0, 0, 0, 0, ' ', ' ' }, 
{ "ALLEY OR XSTREET NAMES FLAG     ", 1, 213, 0, 0, 0, 0, ' ', ' ' }, 
{ "COINCIDENT SEGMENT COUNT        ", 1, 214, 0, 0, 0, 0, ' ', ' ' }, 
{ "FILLER02                        ", 3, 215, 0, 0, 0, 0, ' ', ' ' }, 
{ "1990 CENSUS TRACT               ", 6, 218, 0, 0, 0, 0, ' ', ' ' }, 
{ "2010 CENSUS TRACT               ", 6, 224, 0, 0, 0, 0, ' ', ' ' }, 
{ "2010 CENSUS BLOCK               ", 4, 230, 0, 0, 0, 0, ' ', ' ' }, 
{ "2010 CENSUS BLOCK SUFFIX        ", 1, 234, 0, 0, 0, 0, ' ', ' ' }, 
{ "2000 CENSUS TRACT               ", 6, 235, 0, 0, 0, 0, ' ', ' ' }, 
{ "2000 CENSUS BLOCK               ", 4, 241, 0, 0, 0, 0, ' ', ' ' }, 
{ "2000 CENSUS BLOCK SUFFIX        ", 1, 245, 0, 0, 0, 0, ' ', ' ' }, 
{ "NEIGHBORHOOD TABULATION AREA    ", 4, 246, 0, 0, 0, 0, ' ', ' ' }, 
{ "DSNY SNOW PRIORITY              ", 1, 250, 0, 0, 0, 0, ' ', ' ' }, 
{ "DSNY ORGANIC PICK UP            ", 5, 251, 0, 0, 0, 0, ' ', ' ' }, 
{ "DSNY BULK PICK UP               ", 5, 256, 0, 0, 0, 0, ' ', ' ' }, 
{ "HURRICANE EVAC ZONE             ", 2, 261, 0, 0, 0, 0, ' ', ' ' }, 
{ "FILLER                          ", 11, 263, 0, 0, 0, 0, ' ', ' ' }, 
{ "UNDERLYING HNS FOR NAPS         ", 11, 274, 0, 0, 0, 0, ' ', ' ' }, 
{ "TRUE B7SC                       ", 8, 285, 0, 0, 0, 0, ' ', ' ' }, 
{ "SEGMENT ID                      ", 7, 293, 0, 0, 0, 0, ' ', ' ' }, 
{ "CURVE FLAG                      ", 1, 300, 0, 0, 0, 0, ' ', ' ' }, 
{ "LIST OF 4 LGCS                  ", 8, 301, 0, 0, 0, 0, ' ', ' ' }, 
{ "BOE LGC POINTER                 ", 1, 309, 0, 0, 0, 0, ' ', ' ' }, 
{ "AZIMUTH OF SEGMENT              ", 3, 310, 0, 0, 0, 0, ' ', ' ' }, 
{ "ORIENTATION OF SEGMENT          ", 1, 313, 0, 0, 0, 0, ' ', ' ' }, 
{ "X COORDINATE LOW END            ", 7, 314, 0, 0, 0, 0, ' ', ' ' }, 
{ "Y COORDINATE LOW END            ", 7, 321, 0, 0, 0, 0, ' ', ' ' }, 
{ "Z COORDINATE LOW END            ", 7, 328, 0, 0, 0, 0, ' ', ' ' }, 
{ "X COORDINATE HIGH END           ", 7, 335, 0, 0, 0, 0, ' ', ' ' }, 
{ "Y COORDINATE HIGH END           ", 7, 342, 0, 0, 0, 0, ' ', ' ' }, 
{ "Z COORDINATE HIGH END           ", 7, 349, 0, 0, 0, 0, ' ', ' ' }, 
{ "X COORDINATE CURVE CENTER       ", 7, 356, 0, 0, 0, 0, ' ', ' ' }, 
{ "Y COORDINATE CURVE CENTER       ", 7, 363, 0, 0, 0, 0, ' ', ' ' }, 
{ "Z COORDINATE CURVE CENTER       ", 7, 370, 0, 0, 0, 0, ' ', ' ' }, 
{ "RADIUS OF CIRCLE                ", 7, 377, 0, 0, 0, 0, ' ', ' ' }, 
{ "SECANT LOCATION                 ", 1, 384, 0, 0, 0, 0, ' ', ' ' }, 
{ "ANGLE BETA VALUE                ", 5, 385, 0, 0, 0, 0, ' ', ' ' }, 
{ "ANGLE ALPHA VALUE               ", 5, 390, 0, 0, 0, 0, ' ', ' ' }, 
{ "FROM LION NODE ID               ", 7, 395, 0, 0, 0, 0, ' ', ' ' }, 
{ "TO LION NODE ID                 ", 7, 402, 0, 0, 0, 0, ' ', ' ' }, 
{ "LION KEY FOR VANITY ADDR        ", 10, 409, 0, 0, 0, 0, ' ', ' ' }, 
{ "SOS FOR OF VANITY ADDR          ", 1, 419, 0, 0, 0, 0, ' ', ' ' }, 
{ "SPLIT LOW HOUSE NUMBER          ", 11, 420, 0, 0, 0, 0, ' ', ' ' }, 
{ "TRAFFIC DIRECTION               ", 1, 431, 0, 0, 0, 0, ' ', ' ' }, 
{ "TURN RESTRICTIONS               ", 10, 432, 0, 0, 0, 0, ' ', ' ' }, 
{ "FRACTION FOR CURV CALCULATION   ", 3, 442, 0, 0, 0, 0, ' ', ' ' }, 
{ "ROADWAY TYPE                    ", 2, 445, 0, 0, 0, 0, ' ', ' ' }, 
{ "PHYSICAL ID                     ", 7, 447, 0, 0, 0, 0, ' ', ' ' }, 
{ "GENERIC  ID                     ", 7, 454, 0, 0, 0, 0, ' ', ' ' }, 
{ "NYPD ID                         ", 7, 461, 0, 0, 0, 0, ' ', ' ' }, 
{ "FDNY ID                         ", 7, 468, 0, 0, 0, 0, ' ', ' ' }, 
//{ "BLOCKFACE ID                    ", 7, 475, 0, 0, 0, 0, ' ', ' ' }, 
{ "BIKE LANE 2                     ", 2, 475, 0, 0, 0, 0, ' ', ' ' },
//SPO(2017-02-06):  Added Bike Travel Direction 
{ "BIKE TRAVEL DIRECTION           ", 2, 477, 0, 0, 0, 0, ' ', ' ' },
{ "FILLER05                        ", 3, 479, 0, 0, 0, 0, ' ', ' ' },
{ "STREET STATUS                   ", 1, 482, 0, 0, 0, 0, ' ', ' ' },
{ "STREET WIDTH MINIMUM            ", 3, 483, 0, 0, 0, 0, ' ', ' ' }, 
{ "STREET WIDTH IRREGULAR          ", 1, 486, 0, 0, 0, 0, ' ', ' ' }, 
{ "BIKE LANE                       ", 1, 487, 0, 0, 0, 0, ' ', ' ' }, 
{ "FEDERAL CLASSIFICATION CODE     ", 2, 488, 0, 0, 0, 0, ' ', ' ' }, 
{ "ROW TYPE                        ", 1, 490, 0, 0, 0, 0, ' ', ' ' }, 
{ "LIST OF SECOND SET OF 5 LGCS    ", 10, 491, 0, 0, 0, 0, ' ', ' ' }, 
{ "LEGACY SEGMENT ID               ", 7, 501, 0, 0, 0, 0, ' ', ' ' }, 
{ "FROM PREF LGCS (FIRST SET OF 5) ", 10, 508, 0, 0, 0, 0, ' ', ' ' }, 
{ "TO PREF LGCS (SECOND SET OF 5)  ", 10, 538, 0, 0, 0, 0, ' ', ' ' }, 
{ "NO CROSS STREET CALCULATION FLAG", 1, 548, 0, 0, 0, 0, ' ', ' ' }, 
{ "INDIVIDUAL SEGMENT LENGTH       ", 5, 549, 0, 0, 0, 0, ' ', ' ' }, 
{ "NTA NAME                        ", 75, 554, 0, 0, 0, 0, ' ', ' ' }, 
{ "USPS CITY NAME                  ", 25, 629, 0, 0, 0, 0, ' ', ' ' }, 
{ "LATITUDE                        ", 9, 654, 0, 0, 0, 0, ' ', ' ' }, 
{ "LONGITUDE                       ", 11, 663, 0, 0, 0, 0, ' ', ' ' }, 
{ "SEGMENT FROM NODE               ", 7, 674, 0, 0, 0, 0, ' ', ' ' }, 
{ "SEGMENT TO NODE                 ", 7, 681, 0, 0, 0, 0, ' ', ' ' }, 
{ "SEGMENT FROM X COORDINATE       ", 7, 688, 0, 0, 0, 0, ' ', ' ' }, 
{ "SEGMENT FROM Y COORDINATE       ", 7, 695, 0, 0, 0, 0, ' ', ' ' }, 
{ "SEGMENT FROM Z COORDINATE       ", 7, 702, 0, 0, 0, 0, ' ', ' ' }, 
{ "SEGMENT TO X COORDINATE         ", 7, 709, 0, 0, 0, 0, ' ', ' ' }, 
{ "SEGMENT TO Y COORDINATE         ", 7, 716, 0, 0, 0, 0, ' ', ' ' }, 
{ "SEGMENT TO Z COORDINATE         ", 7, 723, 0, 0, 0, 0, ' ', ' ' }, 
{ "BLOCK FACE ID                   ", 10, 730, 0, 0, 0, 0, ' ', ' ' },
{ "NBR OF TRAVEL LANES             ", 2, 740, 0, 0, 0, 0, ' ', ' ' },
{ "NBR OF PARKING LANES            ", 2, 742, 0, 0, 0, 0, ' ', ' ' },
{ "NBR OF TOTAL LANES              ", 2, 744, 0, 0, 0, 0, ' ', ' ' },
//{ "FILLER06                        ", 255, 746, 0, 0, 0, 0, ' ', ' ' },
{ "STREET WIDTH MAXIMUM            ", 3, 746, 0, 0, 0, 0, ' ', ' ' },
//{ "FILLER06                        ", 252, 749, 0, 0, 0, 0, ' ', ' ' },
{ "SPEED LIMIT                     ", 2, 749, 0, 0, 0, 0, ' ', ' ' },
{ "PUMA CODE                       ", 5, 751, 0, 0, 0, 0, ' ', ' ' },
{ "FILLER06                        ", 245, 756, 0, 0, 0, 0, ' ', ' ' },
{ "REASON CODE                     ", 1, 1001, 0, 0, 0, 0, ' ', ' ' },
{ "REASON CODE QUALIFIER           ", 1, 1002, 0, 0, 0, 0, ' ', ' ' }, 
{ "WARNING CODE                    ", 2, 1003, 0, 0, 0, 0, ' ', ' ' }, 
{ "RETURN CODE                     ", 2, 1005, 0, 0, 0, 0, ' ', ' ' }, 
{ "NBR OF CROSS STRTS AT LOW END   ", 1, 1007, 0, 0, 0, 0, ' ', ' ' }, 
{ "LIST OF XSTRTS (B7SC) AT LOW END", 40, 1008, 5, 8, 0, 0, ' ', ' ' }, 
{ "NBR OF CROSS STRTS AT HIGH END  ", 1, 1048, 0, 0, 0, 0, ' ', ' ' }, 
{ "LIST OF XSTRTS(B7SC) AT HIGH END", 40, 1049, 5, 8, 0, 0, ' ', ' ' }, 
{ "CROSS STRTS NAMES AT LOW END    ", 160, 1089, 5, 32, 0, 0, ' ', ' ' }, 
{ "CROSS STRTS NAMES AT HIGH END   ", 160, 1249, 5, 32, 0, 0, ' ', ' ' }, 
{ "BOE PREFERRED B7SC              ", 8, 1409, 0, 0, 0, 0, ' ', ' ' }, 
{ "BOE PREFERRED STREET NAME       ", 32, 1417, 0, 0, 0, 0, ' ', ' ' }, 
{ "FILLER07                        ", 52, 1449, 0, 0, 0, 0, ' ', ' ' }, 
}; 

int n_wa2_f1ex_field_recs = sizeof(wa2_f1ex_fld_strs) / sizeof(FIELDENTRY); 
//PFIELDENTRY wa2_f1ex_flds = &wa2_f1ex_fld_strs; 
PFIELDENTRY wa2_f1ex_flds = (PFIELDENTRY)wa2_f1ex_fld_strs; 
