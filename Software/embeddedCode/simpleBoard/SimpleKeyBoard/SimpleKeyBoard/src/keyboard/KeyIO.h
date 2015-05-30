/*
 * KeyIO.h
 *
 * Created: 5/8/2015 9:18:48 PM
 *  Author: Levi.Balling
 */ 


#ifndef KEYIO_H_
#define KEYIO_H_

//define all of the rows
//The rows are outputs
//Columns are inputs
//so we neet to set the output high and check all of the inputs
#define ROW_5  IOPORT_CREATE_PIN(IOPORT_PORTB, 10)
#define ROW_4  IOPORT_CREATE_PIN(IOPORT_PORTB, 11)
#define ROW_3  IOPORT_CREATE_PIN(IOPORT_PORTB, 12)
#define ROW_2  IOPORT_CREATE_PIN(IOPORT_PORTB, 13)
#define ROW_1  IOPORT_CREATE_PIN(IOPORT_PORTB, 14)
#define ROW_0  IOPORT_CREATE_PIN(IOPORT_PORTB, 15)


#define COLUMN_0  IOPORT_CREATE_PIN(IOPORT_PORTB, 6)
#define COLUMN_1  IOPORT_CREATE_PIN(IOPORT_PORTB, 5)
#define COLUMN_2  IOPORT_CREATE_PIN(IOPORT_PORTB, 4)
#define COLUMN_3  IOPORT_CREATE_PIN(IOPORT_PORTB, 3)
#define COLUMN_4  IOPORT_CREATE_PIN(IOPORT_PORTB, 2)
#define COLUMN_5  IOPORT_CREATE_PIN(IOPORT_PORTB, 1)
#define COLUMN_6  IOPORT_CREATE_PIN(IOPORT_PORTB, 0)


//Column 0 Ext Interrupt
#define COLUMN_0_EIC_PIN               PIN_PB06A_EIC_EXTINT6
#define COLUMN_0_EIC_MUX               MUX_PB06A_EIC_EXTINT6
#define COLUMN_0_EIC_PINMUX            PINMUX_PB06A_EIC_EXTINT6
#define COLUMN_0_EIC_LINE              COLUMN_0

//Column 1 Ext Interrupt
#define COLUMN_1_EIC_PIN               PIN_PB05A_EIC_EXTINT5
#define COLUMN_1_EIC_MUX               MUX_PB05A_EIC_EXTINT5
#define COLUMN_1_EIC_PINMUX            PINMUX_PB05A_EIC_EXTINT5
#define COLUMN_1_EIC_LINE              COLUMN_1

//Column 2 Ext Interrupt
#define COLUMN_2_EIC_PIN               PIN_PB04A_EIC_EXTINT4
#define COLUMN_2_EIC_MUX               MUX_PB04A_EIC_EXTINT4
#define COLUMN_2_EIC_PINMUX            PINMUX_PB04A_EIC_EXTINT4
#define COLUMN_2_EIC_LINE              COLUMN_2

//Column 3 Ext Interrupt
#define COLUMN_3_EIC_PIN               PIN_PB03A_EIC_EXTINT3
#define COLUMN_3_EIC_MUX               MUX_PB03A_EIC_EXTINT3
#define COLUMN_3_EIC_PINMUX            PINMUX_PB03A_EIC_EXTINT3
#define COLUMN_3_EIC_LINE              COLUMN_3

//Column 4 Ext Interrupt
#define COLUMN_4_EIC_PIN               PIN_PB02A_EIC_EXTINT2
#define COLUMN_4_EIC_MUX               MUX_PB02A_EIC_EXTINT2
#define COLUMN_4_EIC_PINMUX            PINMUX_PB02A_EIC_EXTINT2
#define COLUMN_4_EIC_LINE              COLUMN_4

//Column 5 Ext Interrupt
#define COLUMN_5_EIC_PIN               PIN_PB01A_EIC_EXTINT1
#define COLUMN_5_EIC_MUX               MUX_PB01A_EIC_EXTINT1
#define COLUMN_5_EIC_PINMUX            PINMUX_PB01A_EIC_EXTINT1
#define COLUMN_5_EIC_LINE              COLUMN_5

//Column 6 Ext Interrupt
#define COLUMN_6_EIC_PIN               PIN_PB00A_EIC_EXTINT0
#define COLUMN_6_EIC_MUX               MUX_PB00A_EIC_EXTINT0
#define COLUMN_6_EIC_PINMUX            PINMUX_PB00A_EIC_EXTINT0
#define COLUMN_6_EIC_LINE              COLUMN_6


#endif /* KEYIO_H_ */