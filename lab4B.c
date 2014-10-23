#include <msp430g2553.h>

extern void init();
extern void initNokia();
extern void clearDisplay();
extern void moveDelay();
extern void drawBlock(unsigned char row, unsigned char col);

#define		TRUE			1
#define		FALSE			0
#define		UP_BUTTON		(P2IN & BIT5)
#define		DOWN_BUTTON		(P2IN & BIT4)
#define		AUX_BUTTON		(P2IN & BIT3)
#define		LEFT_BUTTON		(P2IN & BIT2)
#define		RIGHT_BUTTON	(P2IN & BIT1)


void main() {

	unsigned char	x, y, xdir, ydir;

	unsigned int i;

	// === Initialize system ================================================
	IFG1=0; /* clear interrupt flag1 */
	WDTCTL=WDTPW+WDTHOLD; /* stop WD */



	init();
	initNokia();
	clearDisplay();

	x=4;		y=4;

ydir=1;     xdir=1;


	drawBlock(y,x);

	while(1) {

		if (ydir ==1){
			y++;
			if(y>=8) ydir=0;
		}

		if (ydir==0){
			y--;
			if(y<=0) ydir=1;
		}

		if (xdir ==1){
			x++;
			if (x>=11) xdir = 0;
		}

		if(xdir==0){
			x--;
			if(x<=0) xdir =1;
		}


				clearDisplay();
				drawBlock(y,x);
				for(i=0; i<10; i++){
					moveDelay();
				}

		}
}

