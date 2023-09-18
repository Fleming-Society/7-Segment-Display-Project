# 7-Segment-Display-Project
## Introduction

The idea of this project is by setting up a simple and interesting projects for the upcoming Engineers, to give them a taster session of how its feel like to do electronics and become a Electronic Engineer. The course contains both the hardware and the software part, as well as the physics learned in the A-level textbook. We will cover the working mechanism of Light Emitting Diode (LED), basic Arduino knowledge including how to control the Input and Output (I/O) of the Arduino, how does the timer works inside the Arduino and what is Interrupt. At the end of the outreach program, students will be able to: 

- Understand the basis of Arduino programming and the working mechanisms of 7-segment display. 

- Develop problem-solving abilities and the ability to turn the knowledge from the book to the real world. 

- Develop the ability to work and manage an Engineering project as well as collaborating with other people. 

After covering all of these, students can do some of their owm projects and take them home. Some interesting project ideas includes:

- Displaying current date or time
- Displaying an important day (for example, student's own birthday)
- Attaching the display to a sensor to display the sensor reading (for example, read the temperature by connecting to a thermistor)

## Arrangement of the course

- Week 1: Introduction to Arduino, understanding basic electronics and initial programming. The students get familiarized with the Arduino environment and its basic functions. 

- Week 2: Introduction to LED and buzzer. Students learn the basic principles behind LEDs and buzzers and how to use delay and other time-related functions. 

- Week 3: Introduction to thermistors, understanding analog I/O operations and how to read temperature changes. The serial communication of Arduino is also introduced.  

- Week 4: Introduction to the working principles of a 4-digit 7-segment display 

- Week 5: Combine all the lessons and create a complete thermistor-based project that interacts with a 4-digit 7-segment display

## Time schedule

### Week 1
**Objective:** Understand what is Arduino and go through the preparation for the following experiment

**Theory session:** In this session, we will give a brief introduction of Arduino, the paraphirals used in this project and basic Arduino programming functions. That includes the following:

  1. What is a microprocesser and what is an Arduino
   2. The Input and Output (I/O) pins of the Arduino, how does it works
      1. Special pins in the Arduino, e.g. PWM pins and Analog Input pins
      2. How much current they can drive
   3. Basic C programming in Arduino
      1. Loops and functions, what is the difference between`setup()` and `loop()` ?
      2. Arduino functions used in this project, including the followings:
         1. digitalWrite();
         2. analogWrite();
         3. delay(); and millis();
         4. interrupt();
   4. Electronic components that are used in this project:
      1. breadboard
      2. resistor
      3. LED display (common Anode)
      4. buzzers
      5. push buttons
      6. jump wires

**Practical session:**

  1. Install Arduino IDE and make sure Arduino connects to students' laptop. Alternatively, students can use the lab computer
  2. First Arduino program: LED blink sketch
  1. Building simulation on [TinkerCAD](www.tinkercad.com) website