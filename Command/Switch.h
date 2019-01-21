#ifndef SWITCH_H
#define SWITCH_H

class Command;

class Switch {
  public:
    Switch(Command &flipUpCmd, Command &flipDownCmd);

    void flipUp();
    void flipDown();

  private:
    Command &flipUpCommand;
    Command &flipDownCommand;
};

#endif  // SWITCH_H
