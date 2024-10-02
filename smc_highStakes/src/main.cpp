/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       Brandon                                                   */
/*    Created:      10/2/2024, 4:28:50 PM                                     */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
vex::brain       Brain;

// define your global instances of motors and other devices here


int main() {

    Brain.Screen.printAt( 10, 50, "Hello V5" );
    Brain.Screen.printAt( 10, 50, "Hello FROM DEV" );
   
    while(1) {
        
        // Allow other tasks to run
        this_thread::sleep_for(10);
    }
}
