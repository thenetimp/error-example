#ifndef BUTTON_H
#define BUTTON_H

class Button
{
  // Access specifier
  private:
    // Data Members
    int control_type = 0;
    int trigger_mode = 0;

  public:
    Button();
    void initialize(int new_control_type, int new_trigger_mode);
};

#endif
