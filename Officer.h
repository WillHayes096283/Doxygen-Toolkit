/**
 * @file Officer.h
 * @author William Hayes
 * @date 2022-03-10
 * @brief this file declares the Officer class
 * 
 * this file declares the derived class Officer
 * it's data members and methods
 */
#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

/**
 * This a derived class of the base class Employee. It 
 * calculates/prints the officer's ID number, the years they've worked
 * , hours worked, total pay, and evilness they've caused in the world.
 *
 * @class Officer Officer.h "hw07-business-corp-employee-management-system-WillHayes096283/Officer.h"
 * @brief prints the officer's ID, years worked for company, hours worked
 * , hourly pay, and the evilness they've caused in the world
 *
 */
class Officer : public Employee {
 private:
  double evilness; //officer's amount of evilness
 public:

  /**
 * prints out officer's ID, years worked, hourly rate, hours
 * worked, and evilness value
 *
 * @pre data members need to be properly initialized
 * 
 */
  void print();

  /**
 * calculates officer's total pay by adding evilness value to
 * their hourly rate and multiplying it by hours worked
 *
 * @pre evilness, hourlyRate, and hoursWorked need to be properly initialized
 * @return double the total pay for the officer 
 * 
 */
  double calculatePay();

  /**
 * constructor that initializes data members
 *
 * @pre data members need to be properly declared
 * @post initialized inherited members to -1 and evilness to 500
 * 
 */
  Officer();

  /**
 * parameterize constructor that initializes date members to
 * the parameters' values
 *
 * @param int ID is the officer's ID
 * @param int years is the total years the Officer has worked for Business Corp
 * @param double hourlyRate is the officer's hourly rate of pay
 * @param float hoursWorked is the total hours the Officer has worked
 * @param double evilness is the amount of evilness officer has added to world
 * @pre data members need to be properly declared
 * @post initializes data members to parameters' values
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
