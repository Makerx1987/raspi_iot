/**
  -----------------------------------------------------------------------------
  * @file   : file.h
  * @author : xp
  * @version: V0.0.1
  * @date   : 2020/09/23
  * @brief  : 
  -----------------------------------------------------------------------------
  *              Copyright (c) 2017 xxxx,All rights reserved  
  * @description
  *              
  * @history :
  * @date    :
  * @author  :
  * @modification
  *	
  -----------------------------------------------------------------------------
**/ 
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __FILE_H
#define __FILE_H

/* Includes ------------------------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/

/* Exported typedef ----------------------------------------------------------*/

/* Exported functions ------------------------------------------------------- */

int write_data_to_file(const char *file_path, char *str);
int read_data_from_file(const char *file_path, char *str);
int write_log_to_file(char *format, ...);



#endif /* __FILE_H */

/*---------------------------------The End------------------------------------*/
