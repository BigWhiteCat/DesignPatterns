#ifndef COMMAND_H
#define COMMAND_H

/*!
 * \brief the Command interface
 */
class Command {
  public:
    virtual ~Command();

    virtual void execute() = 0;
};

#endif  // COMMAND_H
