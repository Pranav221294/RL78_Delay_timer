#include "r_cg_macrodriver.h"
#include "r_cg_cgc.h"
#include "r_cg_timer.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"

/********************************************************
* *
* RL78_User_Function.c Description *
* *
* File Name : RL78_User_Function.c *
* Composer : Mun Yusin *
* Date : 2016.11.22 *
* URL : http://blog.naver.com/ansdbtls4067 *
* *
//* RL78_User_Function.c Include Files Start 
*/#include"RL78_User_Function.h"
/* RL78_User_Function.c Include Files End */
/* RL78_User_Function.c User Define Start */
#define Function_Err 0
#define Function_End 1
/* RL78_User_Function.c User Define End */
/********************************************************/
/* Delay() Function Start */
/* Function Description : Using the Interval Timer */
/* and Serve the Delay Time(Unit : msec) */
/* Parameter : Delay_Setting_Time */
/* Parameter Description : Delay Time Definition */
/* Retern Value : unsignd char */
/* Retern Value Description : Delay Function */
/* Operaction Success or Error Information */
unsigned int System_Delay_Count;
unsigned charDelay(unsigned int Delay_Setting_Time){unsigned int Save_Delay_Setting_Time; 
unsigned int Delay_Base_Time;
Save_Delay_Setting_Time=Delay_Setting_Time;
Delay_Base_Time=System_Delay_Count;
while(Delay_Setting_Time)
{if(Delay_Base_Time<=System_Delay_Count)
{Delay_Setting_Time=Save_Delay_Setting_Time-(System_Delay_Count-Delay_Base_Time); }
else if(Delay_Base_Time>System_Delay_Count){Delay_Setting_Time=Save_Delay_Setting_Time-((0xFFFF-Delay_Base_Time)+(System_Delay_Count)); }}returnFunction_End; }/* Delay() Function End */
/********************************************************/