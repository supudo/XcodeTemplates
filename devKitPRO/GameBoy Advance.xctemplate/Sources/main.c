//
//  main.c
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//

#include "main.h"

int main(void) {
	irqInit();
	irqEnable(IRQ_VBLANK);
	
	consoleDemoInit();
	
	iprintf("\x1b[10;10HHello!\n");
	iprintf("\x1b[10;10Hsupudo.net!\n");
	
	while (1) {
		VBlankIntrWait();
	}
}