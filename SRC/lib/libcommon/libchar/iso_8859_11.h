/* Copyright (C) ALi Shanghai Corp. 2005
 *
 * Filename	: iso_8859_11.c
 * Description	: ISO-8859_11 charset mapping file.
 * Generated by	: ISO-Convertor, powered by Delphi
 */
#include <types.h>
#include <sys_config.h>

#ifdef ISO_8859_11_SUPPORT

#include "char_map.h"

static UINT16 iso8859_11_map_A0_FF[] = {
	0x00A0,	/*A0	NO-BREAK SPACE */
	0x0E01,	/*A1	THAI CHARACTER KO KAI */
	0x0E02,	/*A2	THAI CHARACTER KHO KHAI */
	0x0E03,	/*A3	THAI CHARACTER KHO KHUAT */
	0x0E04,	/*A4	THAI CHARACTER KHO KHWAI */
	0x0E05,	/*A5	THAI CHARACTER KHO KHON */
	0x0E06,	/*A6	THAI CHARACTER KHO RAKHANG */
	0x0E07,	/*A7	THAI CHARACTER NGO NGU */
	0x0E08,	/*A8	THAI CHARACTER CHO CHAN */
	0x0E09,	/*A9	THAI CHARACTER CHO CHING */
	0x0E0A,	/*AA	THAI CHARACTER CHO CHANG */
	0x0E0B,	/*AB	THAI CHARACTER SO SO */
	0x0E0C,	/*AC	THAI CHARACTER CHO CHOE */
	0x0E0D,	/*AD	THAI CHARACTER YO YING */
	0x0E0E,	/*AE	THAI CHARACTER DO CHADA */
	0x0E0F,	/*AF	THAI CHARACTER TO PATAK */
	0x0E10,	/*B0	THAI CHARACTER THO THAN */
	0x0E11,	/*B1	THAI CHARACTER THO NANGMONTHO */
	0x0E12,	/*B2	THAI CHARACTER THO PHUTHAO */
	0x0E13,	/*B3	THAI CHARACTER NO NEN */
	0x0E14,	/*B4	THAI CHARACTER DO DEK */
	0x0E15,	/*B5	THAI CHARACTER TO TAO */
	0x0E16,	/*B6	THAI CHARACTER THO THUNG */
	0x0E17,	/*B7	THAI CHARACTER THO THAHAN */
	0x0E18,	/*B8	THAI CHARACTER THO THONG */
	0x0E19,	/*B9	THAI CHARACTER NO NU */
	0x0E1A,	/*BA	THAI CHARACTER BO BAIMAI */
	0x0E1B,	/*BB	THAI CHARACTER PO PLA */
	0x0E1C,	/*BC	THAI CHARACTER PHO PHUNG */
	0x0E1D,	/*BD	THAI CHARACTER FO FA */
	0x0E1E,	/*BE	THAI CHARACTER PHO PHAN */
	0x0E1F,	/*BF	THAI CHARACTER FO FAN */
	0x0E20,	/*C0	THAI CHARACTER PHO SAMPHAO */
	0x0E21,	/*C1	THAI CHARACTER MO MA */
	0x0E22,	/*C2	THAI CHARACTER YO YAK */
	0x0E23,	/*C3	THAI CHARACTER RO RUA */
	0x0E24,	/*C4	THAI CHARACTER RU */
	0x0E25,	/*C5	THAI CHARACTER LO LING */
	0x0E26,	/*C6	THAI CHARACTER LU */
	0x0E27,	/*C7	THAI CHARACTER WO WAEN */
	0x0E28,	/*C8	THAI CHARACTER SO SALA */
	0x0E29,	/*C9	THAI CHARACTER SO RUSI */
	0x0E2A,	/*CA	THAI CHARACTER SO SUA */
	0x0E2B,	/*CB	THAI CHARACTER HO HIP */
	0x0E2C,	/*CC	THAI CHARACTER LO CHULA */
	0x0E2D,	/*CD	THAI CHARACTER O ANG */
	0x0E2E,	/*CE	THAI CHARACTER HO NOKHUK */
	0x0E2F,	/*CF	THAI CHARACTER PAIYANNOI */
	0x0E30,	/*D0	THAI CHARACTER SARA A */
	0x0E31,	/*D1	THAI CHARACTER MAI HAN-AKAT */
	0x0E32,	/*D2	THAI CHARACTER SARA AA */
	0x0E33,	/*D3	THAI CHARACTER SARA AM */
	0x0E34,	/*D4	THAI CHARACTER SARA I */
	0x0E35,	/*D5	THAI CHARACTER SARA II */
	0x0E36,	/*D6	THAI CHARACTER SARA UE */
	0x0E37,	/*D7	THAI CHARACTER SARA UEE */
	0x0E38,	/*D8	THAI CHARACTER SARA U */
	0x0E39,	/*D9	THAI CHARACTER SARA UU */
	0x0E3A,	/*DA	THAI CHARACTER PHINTHU */
	0xFFFF,	/*DB	INVALID */
	0xFFFF,	/*DC	INVALID */
	0xFFFF,	/*DD	INVALID */
	0xFFFF,	/*DE	INVALID */
	0x0E3F,	/*DF	THAI CURRENCY SYMBOL BAHT */
	0x0E40,	/*E0	THAI CHARACTER SARA E */
	0x0E41,	/*E1	THAI CHARACTER SARA AE */
	0x0E42,	/*E2	THAI CHARACTER SARA O */
	0x0E43,	/*E3	THAI CHARACTER SARA AI MAIMUAN */
	0x0E44,	/*E4	THAI CHARACTER SARA AI MAIMALAI */
	0x0E45,	/*E5	THAI CHARACTER LAKKHANGYAO */
	0x0E46,	/*E6	THAI CHARACTER MAIYAMOK */
	0x0E47,	/*E7	THAI CHARACTER MAITAIKHU */
	0x0E48,	/*E8	THAI CHARACTER MAI EK */
	0x0E49,	/*E9	THAI CHARACTER MAI THO */
	0x0E4A,	/*EA	THAI CHARACTER MAI TRI */
	0x0E4B,	/*EB	THAI CHARACTER MAI CHATTAWA */
	0x0E4C,	/*EC	THAI CHARACTER THANTHAKHAT */
	0x0E4D,	/*ED	THAI CHARACTER NIKHAHIT */
	0x0E4E,	/*EE	THAI CHARACTER YAMAKKAN */
	0x0E4F,	/*EF	THAI CHARACTER FONGMAN */
	0x0E50,	/*F0	THAI DIGIT ZERO */
	0x0E51,	/*F1	THAI DIGIT ONE */
	0x0E52,	/*F2	THAI DIGIT TWO */
	0x0E53,	/*F3	THAI DIGIT THREE */
	0x0E54,	/*F4	THAI DIGIT FOUR */
	0x0E55,	/*F5	THAI DIGIT FIVE */
	0x0E56,	/*F6	THAI DIGIT SIX */
	0x0E57,	/*F7	THAI DIGIT SEVEN */
	0x0E58,	/*F8	THAI DIGIT EIGHT */
	0x0E59,	/*F9	THAI DIGIT NINE */
	0x0E5A,	/*FA	THAI CHARACTER ANGKHANKHU */
	0x0E5B,	/*FB	THAI CHARACTER KHOMUT */
	0xFFFF, /*FC	INVALID */
	0xFFFF, /*FD	INVALID */
	0xFFFF, /*FE	INVALID */
	0xFFFF, /*FF	INVALID */
};

/* TODO: insert your code here */

#endif /* ISO_8859_11_SUPPORT */
