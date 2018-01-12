class Button
{
  // Access specifier
  private:
    // Data Members
    int control_type = 0;
    int trigger_mode = 0;

  public:
    void initialize(int new_control_type, int new_trigger_mode)
    {
      control_type = new_control_type;
      trigger_mode = new_trigger_mode;
    }
};
