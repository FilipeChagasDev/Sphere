/*
 * SphereScreen.h
 *
 *  Created on: 27/01/2019
 *      Author: filipe
 */

#ifndef KERNEL_SPHERESCREEN_H_
#define KERNEL_SPHERESCREEN_H_

#include <circle/screen.h>

class SphereScreen: public CScreenDevice
{
public:
	SphereScreen(unsigned int width, unsigned int height);
	~SphereScreen();
};

#endif /* KERNEL_SPHERESCREEN_H_ */
