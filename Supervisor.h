/**
 * @file Supervisor.h
 * @author William Hayes
 * @date 2022-03-09
 * @brief This file declares the Supervisor class
 * 
 * This file declares the derived class Supervisor
 * and it's data members and methods
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

/**
 * This class is a dervied class of the base Employee class. It
 * prints/calculates the Supervisor's ID numbers, the year they've worked
 * total hours worked, hourly rate, and the number of employee supervised.
 *
 * @class Supervisor Supervisor.h "hw07-business-corp-employee-management-system-WillHayes096283/Supervisor.h"
 * @brief prints ID, years worked, hourly rate, workers supervised, and etc.
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised; //number of employees supervised
 public:
  
  /**
 * Prints the Supervisor's ID, years worked, hourly rate, hours
 * worked, and number of Employees supervised.
 *
 * @pre data members need to be properly initialized
 * 
 */
  void print();

  /**
 * calculates the supervisor total pay by mulitplying hours worked
 * and hourly rate before adding a 1% bonus for every Employee
 * supervised
 *
 * @pre hourlyRate, hoursWorked, and numSupervised need to be properly
 * initialized
 * @return double total pay for the Supervisor 
 * 
 */
  double calculatePay();

  /**
 * Constructor for Supervisor class initializes inherited values and
 * new data members to -1
 *
 * @pre data members need to be properly declared and Employee inherited 
 * publicly
 * @post initilizes data members to -1
 * 
 */
  Supervisor();

  /**
 * A parameterized constructor that initializes members to the 
 * parameters' values
 *
 * @param int ID is the Employee's ID number
 * @param int years is the number of years the Supervisor has work for 
 * Business Corp.
 * @param double hourlyRate is the Supervisor's hourly rate of pay 
 * @param float hoursWorked total hours the Supervisor has worked
 * @param int numSupervised is the numer of Employees the Supervisor supervised
 * @pre data members need to be properly declared
 * @post initializes data members to the parameters' values
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
