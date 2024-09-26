/*
 * GENERATED FILE - DO NOT EDIT
 * Copyright 2008-2013 Code Red Technologies Ltd,
 * Copyright 2013-2024 NXP
 * Generated linker script file for MCXN236
 * Created from memory.ldt by FMCreateLinkMemory
 * Using Freemarker v2.3.30
 * MCUXpresso IDE v11.10.0 [Build 3148] [2024-07-03] on Sep 26, 2024, 6:19:54 PM
 */

MEMORY
{
  /* Define each memory region */
  PROGRAM_FLASH0 (rx) : ORIGIN = 0x0, LENGTH = 0x80000 /* 512K bytes (alias Flash) */  
  PROGRAM_FLASH1 (rx) : ORIGIN = 0x80000, LENGTH = 0x80000 /* 512K bytes (alias Flash2) */  
  SRAM (rwx) : ORIGIN = 0x20000000, LENGTH = 0x38000 /* 224K bytes (alias RAM) */  
  SRAMX (rwx) : ORIGIN = 0x4000000, LENGTH = 0x18000 /* 96K bytes (alias RAM2) */  
}

  /* Define a symbol for the top of each memory region */
  __base_PROGRAM_FLASH0 = 0x0  ; /* PROGRAM_FLASH0 */  
  __base_Flash = 0x0 ; /* Flash */  
  __top_PROGRAM_FLASH0 = 0x0 + 0x80000 ; /* 512K bytes */  
  __top_Flash = 0x0 + 0x80000 ; /* 512K bytes */  
  __base_PROGRAM_FLASH1 = 0x80000  ; /* PROGRAM_FLASH1 */  
  __base_Flash2 = 0x80000 ; /* Flash2 */  
  __top_PROGRAM_FLASH1 = 0x80000 + 0x80000 ; /* 512K bytes */  
  __top_Flash2 = 0x80000 + 0x80000 ; /* 512K bytes */  
  __base_SRAM = 0x20000000  ; /* SRAM */  
  __base_RAM = 0x20000000 ; /* RAM */  
  __top_SRAM = 0x20000000 + 0x38000 ; /* 224K bytes */  
  __top_RAM = 0x20000000 + 0x38000 ; /* 224K bytes */  
  __base_SRAMX = 0x4000000  ; /* SRAMX */  
  __base_RAM2 = 0x4000000 ; /* RAM2 */  
  __top_SRAMX = 0x4000000 + 0x18000 ; /* 96K bytes */  
  __top_RAM2 = 0x4000000 + 0x18000 ; /* 96K bytes */  
