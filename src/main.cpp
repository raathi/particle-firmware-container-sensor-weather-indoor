/*
 *   Copyright (c) 2023 Thirumalaivasan Rajasekaran
 *   All rights reserved.
 * 
 *   This work is protected by copyright and other intellectual 
 *   property laws and treaties. Unauthorized reproduction, 
 *   distribution, or modification of this work or any portion 
 *   of it may result in severe civil and criminal penalties, 
 *   and will be prosecuted to the maximum extent possible under law.
 */
#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup()
{
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop()
{
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y)
{
  return x + y;
}