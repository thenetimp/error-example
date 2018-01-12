#include "Button.h"

Button::Button(){
  
}

void Button::initialize(int new_control_type, int new_trigger_mode)
{
  control_type = new_control_type;
  trigger_mode = new_trigger_mode;
}

