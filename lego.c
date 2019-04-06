#include <kipr/botball.h>

int main()
{
    wait_for_light (0);
    // first turn 90degrees
  mav(1,1500);
    msleep(950);
     //walk straight for 3 seseconds
    mav(0,1500);
    mav(1,1500);
    msleep(3100);
    //2nd turn 90 degrees
      mav(0,1500);
    mav(1,-1500);
    msleep(750);
       //walking straight 2 seconds
    mav(0,1500);
    mav(1,1500);
    msleep(2500);
    //open the hand
    enable_servos ();
    set_servo_position (1,2000);
    //3rd turn 90 degrees
    mav(0,1500);
    mav(1,-1500);
    msleep(750);  
    //collect food and stuff, walkstraight
    mav(0,1500);
    mav(1,1435);
    msleep(9000);
    //back
    
motor (0,-1000);
    motor (1,-800);
    msleep (7500);
    //rotate topumpoms
    
   motor (1,70);
            msleep (500);
    //walk straight
     
    mav(0,1500);
    mav(1,1435);
    msleep(9000);
    
    //hands up
     enable_servos ();
    set_servo_position (0,600);
    //open hands
    set_servo_position (1,2000);
    //walk toback
        
     motor (0,-1000);
    motor (1,-800);
    msleep (7500);
    
    //hand down
    enable_servos ();
    set_servo_position (0,1400);
    
    //close hand
enable_servos ();
    set_servo_position(1,500);
    
    ao ();
    disable_servos ();
    shut_down_in (120);
    
    return 0;
}
