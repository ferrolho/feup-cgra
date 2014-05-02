/*
 * MyRobot.h
 *
 *  Created on: May 2, 2014
 *      Author: henrique
 */

#ifndef MYROBOT_H_
#define MYROBOT_H_

#include "CGFobject.h"

class MyRobot: public CGFobject {
private:
	int slices, stacks;
	bool smooth;
public:
	MyRobot(int slices, int stacks, bool smooth);
	void draw();
	virtual ~MyRobot();
};

#endif /* MYROBOT_H_ */