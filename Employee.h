/**
 * @file Employee.h
 * @author William Hayes
 * @date 2022-11-03
 * @brief This file declares the employee class and data members
 * 
 * This header file declares the Employee class data members and methods
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * This class allows the user to interact and print employee information: ID, years works, pay, hourly rate of pay, and hours worked.
 *
 * @class Employee Employee.h "doxygen/Employee.h"
 * @brief This class allows the user to interact with employee info
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years; //total years worked for the company
  
 protected:
  double hourlyRate; //employee's hourly pay
  float hoursWorked; //totel hours employee has worked
 public:
  /**
 * prints the Employee's infomation: ID, years worked, hourly
 * rate, and total hours worked
 * @pre data members need to be properly initialized 
 * 
 */
  virtual void print();
  
  /**
 * Calculates Employee's pay by multiplying hourlyRate & hoursWorked
 *
 * @pre hourlyRate and hoursWorked need to be properly initialized
 * @return virtual double the employee's pay for their work 
 * 
 */
  virtual double calculatePay();
  
  /**
 * Increments the number of years the employee has worked for Business
 * corp, and increases their hourly rate by 0.2%.
 *
 * @pre both hourlyRate and years need to be properly initialized 
 * @post increases hourlyRate and years data members
 *
 */
  void anniversary();

  /**
 * Constuctor that initializes data members to -1.
 *
 * @pre the int, double, and float data members need to be properly declared
 * @post initializes most data members to -1
 * 
 */
  Employee();

  /**
 * Parameterized constructor that initializes data members to given
 * parameter values.
 *
 * @param int ID is the Employee ID number
 * @param int years is the years that the Employee has work at Business Corp
 * @param double hourlyRate is the Employee's hourly rate of pay
 * @param float hoursWorked is the Employee's total hours worked
 * @pre data members need to be properly declared
 * @post initializes data members to the parameters' values
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
