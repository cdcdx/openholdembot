#ifndef INC_CODESNIPPETS_H
#define INC_CODESNIPPETS_H

static const char *k_code_snippet_license =
	"//************************************************************************\n"
	"//                                                                        \n"
	"// Converted with OpenPPL 1.0                                             \n"
	"//                                                                        \n"
	"// OpenPPL is part of the OpenHoldem project                              \n"
	"//   Download page:         http://code.google.com/p/openholdembot/       \n"
	"//   Forums:                http://www.maxinmontreal.com/forums/index.php \n"
	"//   Licensed under GPL v3: http://www.gnu.org/licenses/gpl.html          \n"
	"//                                                                        \n" 
	"// The original PPL (Poker Programming Language) got invented by          \n"
	"//   Shanky Bonusbots:      http://www.bonusbots.com/supportforum/YaBB.pl \n"
	"//                                                                        \n"
	"// Required OpenHoldem version: 2.2.0 or later                            \n"
	"//   Symbols not working with 2.1.x:                                      \n"
	"//     * isfinaltable                                                     \n"
	"//                                                                        \n"
	"// Contributors:                                                          \n"
	"//   Bob3456                                                              \n"
	"//   CoolBotMe123                                                         \n"
	"//   CrumbleSunday                                                        \n"
	"//   Dr.Kaktuz                                                            \n"
	"//   Efu                                                                  \n"
	"//   Fn101                                                                \n"
	"//   Gecko                                                                \n"
	"//   JConner                                                              \n"
	"//   KaeKruse                                                             \n"
	"//   Kyo                                                                  \n"
	"//   MerzkiyTipon                                                         \n"
	"//   Morello                                                              \n"
	"//   MrRuder                                                              \n"
	"//   Nik0                                                                 \n"
	"//   NPNG                                                                 \n"
	"//   Poker_Dog                                                            \n"
	"//   Postenjak                                                            \n"
	"//   Satanikut                                                            \n"
	"//   Stangelnator                                                         \n"
	"//   SteveG1963                                                           \n"
	"//   Strikles                                                             \n"
	"//   TheHighFish                                                          \n"
	"//   ThemAndMe                                                            \n"
	"//   Want2Learn                                                           \n"
	"//   Zolp                                                                 \n"
	"//                                                                        \n"
	"//************************************************************************\n"
	"\n"
	"\n";

static const char *k_code_snippet_options =
	"//***********************************************************\n"
	"//                                                           \n"
	"//  Option settings                                          \n"
	"//  ===============                                          \n"
	"//                                                           \n"
	"//  To be ignored,                                           \n"
	"//  as nearly all of them are for the built-in default bot,  \n"
	"//  which is not supported.                                  \n"
	"//                                                           \n"
	"//***********************************************************\n"
	"\n"
	"\n";

static const char *k_code_snippet_list_section =
	"//***********************************************************\n"
	"//                                                           \n"
	"//  Hand lists                                               \n"
	"//  ==========                                               \n"
	"//                                                           \n"
	"//  Translated code for user-defined hand-lists.             \n"
	"//  Note: hand-lists are not part of standard PPL.           \n"
	"//  Please refer to the manual for details.                  \n"
	"//                                                           \n"
	"//  OpenPPL lists look like that                             \n"
	"//                                                           \n"
	"//  CUSTOM                                                   \n"
	"//                                                           \n"
	"//  LISTS                                                    \n"
	"//                                                           \n"
	"//  NEW LIST 007                                             \n"
	"//      // Standard open-raising range for CutOff            \n"
	"//      AA KK QQ                                             \n"
	"//      AKs AQs                                              \n"
	"//      AKo 72o                                              \n"
	"//  END LIST                                                 \n"
	"//                                                           \n"
	"//***********************************************************\n"
	"\n"
	"\n";

static const char *k_code_snippet_user_defined_functions =
	"//***********************************************************\n"
	"//                                                           \n"
	"//  User defined functions                                   \n"
	"//  ======================                                   \n"
	"//                                                           \n"
	"//  Translated code for user-defined functions.              \n"
	"//  Note: UDFs are not part of standard PPL.                 \n"
	"//  Please refer to the manual for details.                  \n"
	"//                                                           \n"
	"//  CUSTOM                                                   \n"
	"//                                                           \n"
	"//  SYMBOLS                                                  \n"
	"//                                                           \n"
	"//  NEW SYMBOL ThisIsAnExample                               \n"
	"//      WHEN (OpponentsLeft > 3) RETURN 5 FORCE              \n"
	"//      WHEN (Potsize >= 20) RETURN (Pi * R * R) FORCE       \n"
	"//      WHEN Others RETURN 42 FORCE                          \n"
	"//  END SYMBOL                                               \n"
	"//                                                           \n"
	"//***********************************************************\n"
	"\n"
	"\n";

static const char *k_code_snippet_start_of_code_sections =
	"//***********************************************************\n"
	"//                                                           \n"
	"//  Main Code Sections                                       \n"
	"//  ==================                                       \n"
	"//                                                           \n"
	"//  Preflop, Flop, Turn and River                            \n"
	"//  are mandatory for every OpenPPL-profile.                 \n"
	"//                                                           \n"
	"//***********************************************************\n"
	"\n"
	"\n";

static const char *k_code_snipped_prime_coded_board_ranks =
	"//*****************************************************************\n"
	"//                                                                 \n"
	"//  Prime-coded board ranks                                        \n"
	"//  =======================                                        \n"
	"//                                                                 \n"
	"//  \"Board = XYZ\"-expressions are difficult to translate           \n"
	"//  to OH-script.                                                  \n"
	"//  Cards may appear more than once, e.g. 'board = ATT',	        \n"
	"//  therefore we can't work with rankbits here,  	                \n"
	"//  but do some prime-coding, so that we can easily check for      \n"
	"//  multiple cards.                                                \n"
	"//                                                                 \n"
	"//  Card:      2   3   4   5   6   7   8   9   T   J   Q   K   A   \n"
	"//  Coding:    2   3   5   7  11  13  17  19  23  29  31  37  41   \n" 
	"//                                                                 \n"
	"//  Example: prime-coding for ATT = 41 * 23 * 23 = 21689           \n"
	"//  Therefore a board contains ATT, exactly if its prime-coding    \n"
	"//  can be divided by 21689 without a reminder.                    \n"
	"//                                                                 \n"
	"//*****************************************************************\n"
	"\n"
	"\n"
	"##f$prime_coded_board_ranks##\n"
	"// First board card \n"
	"  [($$cr0 ==  2) ? f$PrimeCode_2 : ($$cr0 ==  3) ? f$PrimeCode_3 : \n"
	"   ($$cr0 ==  4) ? f$PrimeCode_4 : ($$cr0 ==  5) ? f$PrimeCode_5 : \n"
	"   ($$cr0 ==  6) ? f$PrimeCode_6 : ($$cr0 ==  7) ? f$PrimeCode_7 : \n"
	"   ($$cr0 ==  8) ? f$PrimeCode_8 : ($$cr0 ==  9) ? f$PrimeCode_9 : \n"
	"   ($$cr0 == 10) ? f$PrimeCode_T : ($$cr0 == 11) ? f$PrimeCode_J : \n"
	"   ($$cr0 == 12) ? f$PrimeCode_Q : ($$cr0 == 13) ? f$PrimeCode_K : \n"
	"   ($$cr0 == 14) ? f$PrimeCode_A : 1] \n"
	"*\n"
	"// Second board card \n"
	"  [($$cr1 ==  2) ? f$PrimeCode_2 : ($$cr1 ==  3) ? f$PrimeCode_3 : \n"
	"   ($$cr1 ==  4) ? f$PrimeCode_4 : ($$cr1 ==  5) ? f$PrimeCode_5 : \n"
	"   ($$cr1 ==  6) ? f$PrimeCode_6 : ($$cr1 ==  7) ? f$PrimeCode_7 : \n"
	"   ($$cr1 ==  8) ? f$PrimeCode_8 : ($$cr1 ==  9) ? f$PrimeCode_9 : \n"
	"   ($$cr1 == 10) ? f$PrimeCode_T : ($$cr1 == 11) ? f$PrimeCode_J : \n"
	"   ($$cr1 == 12) ? f$PrimeCode_Q : ($$cr1 == 13) ? f$PrimeCode_K : \n"
	"   ($$cr1 == 14) ? f$PrimeCode_A : 1] \n"
	"*\n"
	"// Third board card \n"
	"  [($$cr2 ==  2) ? f$PrimeCode_2 : ($$cr2 ==  3) ? f$PrimeCode_3 : \n"
	"   ($$cr2 ==  4) ? f$PrimeCode_4 : ($$cr2 ==  5) ? f$PrimeCode_5 : \n"
	"   ($$cr2 ==  6) ? f$PrimeCode_6 : ($$cr2 ==  7) ? f$PrimeCode_7 : \n"
	"   ($$cr2 ==  8) ? f$PrimeCode_8 : ($$cr2 ==  9) ? f$PrimeCode_9 : \n"
	"   ($$cr2 == 10) ? f$PrimeCode_T : ($$cr2 == 11) ? f$PrimeCode_J : \n"
	"   ($$cr2 == 12) ? f$PrimeCode_Q : ($$cr2 == 13) ? f$PrimeCode_K : \n"
	"   ($$cr2 == 14) ? f$PrimeCode_A : 1] \n"
	"*\n"
	"// Fourth board card \n"
	"  [($$cr3 ==  2) ? f$PrimeCode_2 : ($$cr3 ==  3) ? f$PrimeCode_3 : \n"
	"   ($$cr3 ==  4) ? f$PrimeCode_4 : ($$cr3 ==  5) ? f$PrimeCode_5 : \n"
	"   ($$cr3 ==  6) ? f$PrimeCode_6 : ($$cr3 ==  7) ? f$PrimeCode_7 : \n"
	"   ($$cr3 ==  8) ? f$PrimeCode_8 : ($$cr3 ==  9) ? f$PrimeCode_9 : \n"
	"   ($$cr3 == 10) ? f$PrimeCode_T : ($$cr3 == 11) ? f$PrimeCode_J : \n"
	"   ($$cr3 == 12) ? f$PrimeCode_Q : ($$cr3 == 13) ? f$PrimeCode_K : \n"
	"   ($$cr3 == 14) ? f$PrimeCode_A : 1] \n"
	"*\n"
	"// Fifth board card \n"
	"  [($$cr4 ==  2) ? f$PrimeCode_2 : ($$cr4 ==  3) ? f$PrimeCode_3 : \n"
	"   ($$cr4 ==  4) ? f$PrimeCode_4 : ($$cr4 ==  5) ? f$PrimeCode_5 : \n"
	"   ($$cr4 ==  6) ? f$PrimeCode_6 : ($$cr4 ==  7) ? f$PrimeCode_7 : \n"
	"   ($$cr4 ==  8) ? f$PrimeCode_8 : ($$cr4 ==  9) ? f$PrimeCode_9 : \n"
	"   ($$cr4 == 10) ? f$PrimeCode_T : ($$cr4 == 11) ? f$PrimeCode_J : \n"
	"   ($$cr4 == 12) ? f$PrimeCode_Q : ($$cr4 == 13) ? f$PrimeCode_K : \n"
	"   ($$cr4 == 14) ? f$PrimeCode_A : 1] \n"
	"\n"
	"\n"
	"##f$PrimeCode_2##\n"
	"  2\n"
	"\n"
	"##f$PrimeCode_3##\n"
	"  3\n"
	"\n"
	"##f$PrimeCode_4##\n"
	"  5\n"
	"\n"
	"##f$PrimeCode_5##\n"
	"  7\n"
	"\n"
	"##f$PrimeCode_6##\n"
	"  11\n"
	"\n"
	"##f$PrimeCode_7##\n"
	"  13\n"
	"\n"
	"##f$PrimeCode_8##\n"
	"  17\n"
	"\n"
	"##f$PrimeCode_9##\n"
	"  19\n"
	"\n"
	"##f$PrimeCode_T##\n"
	"  23\n"
	"\n"
	"##f$PrimeCode_J##\n"
	"  29\n"
	"\n"
	"##f$PrimeCode_Q##\n"
	"  31\n"
	"\n"
	"##f$PrimeCode_K##\n"
	"  37\n"
	"\n"
	"##f$PrimeCode_A##\n"
	"  41\n"
	"\n"
	"\n";

static const char *k_code_snippet_technical_functions =
	"//***********************************************************\n"
	"//                                                           \n"
	"//  Technical functions                                      \n"
	"//  ===================                                      \n"
	"//                                                           \n"
	"//  Functions needed for integration into OpenHoldem.        \n"
	"//  They translate the f$Decision-function to standard       \n"
	"//  autoplayer-functions like f$alli, f$rais and f$call.     \n"
	"//                                                           \n"
	"//***********************************************************\n"
	"\n"
	"\n"
	"##f$OpenPPL_Decision##\n"
	"[betround == 1] ? f$preflop :\n"
	"[betround == 2] ? f$flop :\n"
	"[betround == 3] ? f$turn :\n"
	"[betround == 4] ? f$river :\n"
	"// This should not happen\n"
	"f$OpenPPL_Fold\n"
	"\n"
	"##f$OpenPPL_RememberToSitoutIfNecessary##\n"
	"// OpenHoldem handles autoplayer actions when it is heros turn,\n"
	"// but f$sitin, f$sitout and f$leave once every N heartbeats,\n"
	"// contrary to OpenPPL were both can happen only at heros turn.\n" 
	"// Therefore we have to remember a decision to SitOut somehow\n"
	"// and recall it later.\n"
	"[f$OpenPPL_Decision == f$OpenPPL_SitOut] ? me_st_GoBuddyTakeABreakAndABeer_1 : 0\n"
	"\n"
	"##f$alli##\n"
	"// f$alli is the very first function to be called on each turn,\n"
	"// so we abuse it to initialize memory-symbhols as a side-effect\n"
	"// and only then we do the real evaluation.\n"
	"  [f$OpenPPL_InitMemorySymbols * 0]\n"    
	"+ [f$OpenPPL_RememberToSitoutIfNecessary * 0]\n"
	"+ [   (f$OpenPPL_Decision == f$OpenPPL_RaiseMax)\n"
	"   || (f$OpenPPL_Decision > balance)]\n"
	"\n"
	"##f$betsize##\n"
	"f$alli ? [balance + currentbet] :\n"
	"[f$OpenPPL_Decision >= 0] ? f$OpenPPL_Decision:\n"
	"0\n"
	"\n"
	"##f$rais##\n"
	"   [f$OpenPPL_Decision == f$OpenPPL_Raise]\n"
	" || [f$betsize > 0]\n"
	"//\n"
	"// Below is 2 times the same expression,\n"
	"// but we want to log the very verbose explanation\n"
	"// only in the case of a true error\n" 
	"// and not for normal evaluations.\n"
	"//\n"
	" || [Decision == 0 && f$betsize == f$OpenPPL_Undefined_BetSize_Probably_Due_To_Misscraped_Pot_Defaulting To_Minraise]\n"
	"\n"
	"##f$call##\n"
	"   [f$OpenPPL_Decision == f$OpenPPL_Check]\n"
	"|| [f$OpenPPL_Decision == f$OpenPPL_Call]\n"
	"|| [f$OpenPPL_AmountToCall == 0]\n"
	"|| f$rais\n"
	"\n"
	"##f$sitout##\n"
	"me_re_GoBuddyTakeABreakAndABeer\n"
	"\n"
	"\n";

static const char *k_code_snippet_reset_user_variables =
	"//************************************************************************\n"
	"//\n"
	"// Resetting all User-Defined Variables.\n"
	"//\n"
	"// To be called at the very beginning of a hand.\n"
	"//\n"
	"//************************************************************************\n"
	"\n"
	"\n";

#endif INC_CODESNIPPETS_H