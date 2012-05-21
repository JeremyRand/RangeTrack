#ifndef RangeTrackSingleServoPositionReader_h
#define RangeTrackSingleServoPositionReader_h

#include "RangeTrackPositionReader.h"


class RangeTrackSingleServoPositionReader : public RangeTrackPositionReader
{

 public:

    RangeTrackSingleServoPositionReader(int port);

    virtual int GetPort();

    virtual void SetPort(int port);

    virtual long GetPosition();

    virtual void GoToPosition(long position);


 private:
    int m_port;

};

#endif // RangeTrackSingleServoPositionReader_h
