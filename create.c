#include <kipr/botball.h>

int main()
{
    wait_for_light (0);
    create_connect ();
    
    // turn 90
    get_create_total_angle (-90);
    set_create_total_angle (-90);
    
    // drive --> water tank
    create_drive_direct (500,500);
    msleep (1500);
    
    // arms down
    motor(0,-80);
    msleep (300);
    motor (1,-80);
    msleep (300);
    
    // claw open 
    enable_servos ();
    set_servo_position (0,576);
    set_servo_position (1,576);
    
    // claw close
    set_servo_position (0,966);
    set_servo_position (1,104);
    
    // arms up 
    motor(1,80);
    msleep (300);
    motor (0,80);
    msleep (300);
    
    // drive backward
    create_drive_direct (-500,-500);
    msleep (1500);
    
    // turn 90
    get_create_total_angle (90);
    set_create_total_angle (90);
    
    // drive forward 
    create_drive_direct (500,500);
    msleep (2000);
    
    // arms down 
    motor (0,-80);
    msleep (300);
    motor (1,-80);
    msleep (300);
    
    // claw open 
    set_servo_position (0,576);
    set_servo_position (1,576);
    
    create_drive_direct (-500,-500);
    msleep (850);
    
    // people:
    
    // arms forward
    motor (0,80);
    msleep (300);
    motor (1,80);
    msleep (250);
    
    // claw closes
    set_servo_position (0,990);
    set_servo_position (1,95);
    
    // drive back 
    create_drive_direct (-500,-500);
    msleep (1000);
    
    // throw in bascket
    motor (1,80);
    msleep (500);
    set_servo_position (0,580);
    set_servo_position (1,580);
    motor (1,-80);
    msleep (250);
    
    // turn 90
    get_create_total_angle (90);
    set_create_total_angle (90);
    
    // drive forward
    create_drive_direct (500,500);
        msleep (2000);
    
   // turn 90 
     get_create_total_angle (-90);
    set_create_total_angle (-90);
    
    // arms forward 
    motor (0,80);
    msleep (300);
    motor (1,80);
    msleep (250);
    
    // claw closes
    set_servo_position (0,990);
    set_servo_position (1,95);
    
     // drive back 
    create_drive_direct (-500,-500);
    msleep (1000);
    
    // throw in bascket
    motor (1,80);
    msleep (500);
    set_servo_position (0,580);
    set_servo_position (1,580);
    motor (1,-80);
    msleep (250);
    
    // drive back
    create_drive_direct (-500,-500);
    msleep (1500);
    
    // turn 90 
     get_create_total_angle (-90);
    set_create_total_angle (-90);
    
    // drive forward 
     create_drive_direct (500,500);
    msleep (4500);
     
    // open bascket 
    set_servo_position (2,580);
      
    create_disconnect ();
   shut_down_in (120);
  
    return 0;
}
