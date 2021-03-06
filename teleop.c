#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTServo,  none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  motorA,          motor3,        tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorB,          motor2,        tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          motor1,        tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  mtr_S1_C1_1,     rightMotor,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     leftMotor,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_1,     flagMotor,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     armMotor,      tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S1_C3_1,    armServo,             tServoStandard)
#pragma config(Servo,  srvo_S1_C3_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C3_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C3_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C3_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C3_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
 
#define blueButton 1
#define greenButton 2
#define redBUtton 3
#define yellowButton 4
#define leftButton 5
#define rightButton 6
#define leftTrigger 7
#define rightTrigger 8
#define selectButton 9
#define startButton 10
#define leftTopHat 11
#define rightTopHat 12
 
 
#include "JoystickDriver.c"
task main(){
    while(1){
////////Driving////////////
            getJoystickSettings(joystick);
            
            //This is some fancy 1 joystick drive code.
                motor[rightMotor]=((joystick.joy1_x1)/127)-((joystick.joy1_y1)/127)*60; //the *60 is a speed modifier, 100 is full speed ahead.
                motor[leftMotor]=((joystick.joy1_y1)/127)+((joystick.joy1_x1)/127)*60; 
 
}
