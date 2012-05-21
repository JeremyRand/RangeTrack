#ifndef RangeTrackSonarRangeReader_h
#define RangeTrackSonarRangeReader_h

#include "RangeTrackRangeReader.h"


class RangeTrackSonarRangeReader : public RangeTrackRangeReader
{

 public:

    RangeTrackSonarRangeReader(int port);

    virtual int GetPort();

    virtual void SetPort(int port);

    virtual short GetRange();


 private:
    int m_port;

};

#endif // RangeTrackSonarRangeReader_h
