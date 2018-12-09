/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/


#include <Subsystems/Winch.h>
#include "../RobotMap.h"
#include "../Commands/Climb.h"

Winch::Winch() : Subsystem("ExampleSubsystem") {

}

void Winch::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new Climb());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void Winch::climb() {

}
