#ifndef RangeTrackSingleMotorPositionReader_h
#define RangeTrackSingleMotorPositionReader_h

#include "RangeTrackPositionReader.h"


class RangeTrackSingleMotorPositionReader : public RangeTrackPositionReader
{

 public:

    RangeTrackSingleMotorPositionReader(int port = 0);

    virtual int GetPort();

    virtual void SetPort(int port);

    virtual long GetPosition();

    virtual void GoToPosition(long position);


 private:
    int m_port;

};

#endif // RangeTrackSingleMotorPositionReader_h
