#ifndef RangeTrackRawAnalogRangeReader_h
#define RangeTrackRawAnalogRangeReader_h

#include "RangeTrackRangeReader.h"


class RangeTrackRawAnalogRangeReader : public RangeTrackRangeReader
{

 public:

    RangeTrackRawAnalogRangeReader(int port);

    virtual int GetPort();

    virtual void SetPort(int port);

    virtual short GetRange();


 private:
    int m_port;

};

#endif // RangeTrackRawAnalogRangeReader_h
