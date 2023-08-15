# Counter Project

**** system description: ****

Simple counter project:
 the user enters a number in the keypad and the counter starts from it upto 999 then repeat itself

**** What are the components to make that system? ****

    • 1 Keypad (4x4)
    • 3 Seven Segment.
    • Microcontroller (we use ATMEGA32).

**** system design: ****
 it consists of 4 parts:

    • HAL  
    • MCAL 
    • LIB
    • Application
  
Each level of them contains some of driver which control the whole system.

     • HAL ➔ Seven Segment driver & Keypad (4x4) driver.
     • MCAL ➔ DIO driver.
     • LIB ➔ Memory Map & Standerd Macros & Standerd Types.
     • Application ➔ final level of the system.
  

<p>
<p>
 
https://github.com/Ehab0100/01-Counter/assets/130321359/f759badc-a280-455c-a518-586afd6acec4

