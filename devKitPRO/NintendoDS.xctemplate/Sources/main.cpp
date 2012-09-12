//
//  main.cpp
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//

#include "main.h"

void Vblank() {
	frame++;
}

int main(void) {
	touchPosition touchXY;
	irqSet(IRQ_VBLANK, Vblank);
	consoleDemoInit();
	
	iprintf("        Hello!\n");
	iprintf("     \x1b[32mwww.supudo.net\n");
	
	while (1) {
		swiWaitForVBlank();
		touchRead(&touchXY);
		
		// print at using ansi escape sequence \x1b[line;columnH 
		iprintf("\x1b[10;0HFrame = %d",frame);
		iprintf("\x1b[16;0HTouch x = %04X, %04X\n", touchXY.rawx, touchXY.px);
		iprintf("Touch y = %04X, %04X\n", touchXY.rawy, touchXY.py);		
	}
	return 0;
}
