#ifndef RangeTrackETRangeReader_h
#define RangeTrackETRangeReader_h

#include "RangeTrackRangeReader.h"


class RangeTrackETRangeReader : public RangeTrackRangeReader
{

 public:

    RangeTrackETRangeReader(int port);

    virtual int GetPort();

    virtual void SetPort(int port);

    virtual short GetRange();


 private:
    int m_port;

};

#endif // RangeTrackETRangeReader_h
