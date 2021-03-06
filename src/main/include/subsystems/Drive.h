/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>
#include <frc/WPILib.h>
#include <ctre/Phoenix.h>
#include "rev/CANSparkMax.h"

#include "Pneumatics.h"

class Drive : public frc::Subsystem {
 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities

 public:
  Drive();
  void InitDefaultCommand() override; 
  void Periodic() override;

  static std::shared_ptr<frc::Joystick> JOY;

  static std::shared_ptr<rev::CANSparkMax> CSM_NEO_left;
  static std::shared_ptr<rev::CANSparkMax> CSM_CIM_left;
  static std::shared_ptr<WPI_TalonSRX>     TAL_CIM_left;

  static std::shared_ptr<rev::CANSparkMax> CSM_NEO_right;
  static std::shared_ptr<rev::CANSparkMax> CSM_CIM_right;
  static std::shared_ptr<WPI_TalonSRX>     TAL_CIM_right;

  static std::shared_ptr<rev::CANEncoder> CE_left;
  static std::shared_ptr<rev::CANEncoder> CE_right;

  static std::shared_ptr<frc::SpeedControllerGroup> SCG_left;
  static std::shared_ptr<frc::SpeedControllerGroup> SCG_right;

  static std::shared_ptr<frc::DifferentialDrive> DIFF;

  
};
