/***************
* Constants
*
* Sharang Phadke
* Sameer Chauhan
***************/

#ifndef CONST_H
#define CONST_H

#define LEFT     0
#define RIGHT    1
#define CENTER   2

#define LEFTTHRESH       		261
#define RIGHTTHRESH      		257
#define CENTERTHRESH_CLOSE  	500
#define CENTERTHRESH_FAR		210//240//328
#define CENTERTHRESH_TOOCLOSE   600
#define ALL_TOOCLOSE			450 //less than this value
#define STRAIGHTEN_THRESH       8

#define BASE_IR_SIGMA		10

#define LEFT_IR    3
#define CENTER_IR  4
#define RIGHT_IR   5

#define LEFT_ENCODER_1   3
#define LEFT_ENCODER_2   11
#define RIGHT_ENCODER_1  2
#define RIGHT_ENCODER_2  10

#define BRAKE_PERIOD	45
#define SAMPLE_PERIOD 	16
#define ALPHA 			0.75

#define DECIDE        	0
#define STRAIGHT      	1
#define TURN_RIGHT    	2
#define TURN_LEFT     	3
#define TURN_AROUND   	4
#define STOP        	5
#define IDLE        	6
#define REVERSED		7

#define TURN_ENCODER_THRESH 		1550
#define TURN_AROUND_ENCODER_THRESH 	2600
#define DETECT_THRESH 				1

#define SQUARE_SIZE 	1225 // 1200

#define NORTH 		1
#define EAST 		2
#define SOUTH  		4
#define WEST  		8
#define MAZE_SIZE 	5
#define CENTER_X 	2
#define CENTER_Y 	2

#define BASE_POWER			60
#define TURN_POWER			75
#define ADJUST_POWER 		45
#define SLOWEST 			15


#define ROTATE(x,y) (x << y | x >> (4-y)) & 15


#endif
