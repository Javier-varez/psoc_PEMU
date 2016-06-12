/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#ifndef GNOME_CONFIG
#define GNOME_CONFIG
    
#include "project.h"
    
// Debug
#define GNOME_DEBUGGING_ON              0x00
#define GNOME_DEBUGGING_PERIOD          500
    
// Procesador
#define GNOME_WORD_SIZE                 0x04    // 4 bits
#define GNOME_STACK_SIZE                0x04    // Tamaño de las pilas
#define GNOME_RESET_VECTOR              0x00    // Vector de reset
#define GNOME_IT_VECTOR                 0xE0    // Vector de interrupción
#define GNOME_JMP_ADD_ALWAYS_PAGE_0     0x00    // 0: Salto siempre a la pagina cero (MSB siempre 0).
                                                // 1: Salto en la pagina actual (MSB = PC[7]).
    
// I/O
#define GNOME_VIA_ACTIVE                0x01    // Via hardware conectada
#define GNOME_VIA_CONFIG                0x0D    // Registro de configuracion para la Via
#define GNOME_VIA_PORT0                 0x0E    // Registro mapeado en memoria para el puerto 0
#define GNOME_VIA_PORT1                 0x0F    // Registro mapeado en memoria para el puerto 1
#define GNOME_VIA_PORT_SIZE             0x08    // Tamaño de la vía
    
// Registros Mapeados en Memoria (PSOC)
#define GNOME_VIA_CONFIG_IN_ADDR        via8bits_Stat_Status_PTR 
#define GNOME_VIA_CONFIG_OUT_ADDR       via8bits_Ctrl_Control_PTR
#define GNOME_VIA_PORT0_IN_ADDR         via8bits_P0_stat_Status_PTR
#define GNOME_VIA_PORT0_OUT_ADDR        via8bits_P0_ctrl_Control_PTR
#define GNOME_VIA_PORT1_IN_ADDR         via8bits_P1_stat_Status_PTR
#define GNOME_VIA_PORT1_OUT_ADDR        via8bits_P1_ctrl_Control_PTR

// Optimizacion de registros, en caso de que el sintetizador elimine algun puerto de acceso por no ser utilizado
    
#ifdef via8bits_Stat_sts_sts_reg__REMOVED
    #define GNOME_VIA_CONFIG_IN_OPT_OUT 1u
#endif

#ifdef via8bits_Ctrl_Sync_ctrl_reg__REMOVED
    #define GNOME_VIA_CONFIG_OUT_OPT_OUT 1u
#endif

#ifdef via8bits_P0_stat_sts_sts_reg__REMOVED
    #define GNOME_VIA_PORT0_IN_OPT_OUT 1u
#endif

#ifdef via8bits_P0_ctrl_Sync_ctrl_reg__REMOVED
    #define GNOME_VIA_PORT0_OUT_OPT_OUT 1u
#endif

#ifdef via8bits_P1_stat_sts_sts_reg__REMOVED
    #define GNOME_VIA_PORT1_IN_OPT_OUT 1u
#endif

#ifdef via8bits_P1_ctrl_Sync_ctrl_reg__REMOVED
    #define GNOME_VIA_PORT1_OUT_OPT_OUT 1u
#endif
    
#endif // GNOME_CONFIG
/* [] END OF FILE */
